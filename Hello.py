import random
from tkinter import *
import _tkinter

width = 500
Height = 500
speed = 200
SpaceSize = 20
bodySize = 2
SNAKE = "#00FF00"
FOOD = "#FFFFFF"
BACKGROUND = "#000000"

# method that controls everything 
def game_over(): 

	canvas.delete(ALL) 
	canvas.create_text(canvas.winfo_width()/2, 
					canvas.winfo_height()/2, 
					font=('consolas', 70), 
					text="GAME OVER", 
					fill="red", tag="gameover") 

def check_collisions(snake): 
  
    x, y = snake.coordinates[0] 
  
    if x < 0 or x >= width: 
        return True
    elif y < 0 or y >= Height: 
        return True
  
    for body_part in snake.coordinates[1:]: 
        if x == body_part[0] and y == body_part[1]: 
            return True
  
    return False
# Giving title to the gaming window 




class Snake: 

	def __init__(self): 
		self.body_size = bodySize
		self.coordinates = [] 
		self.squares = [] 

		for i in range(0, bodySize): 
			self.coordinates.append([0, 0]) 

		for x, y in self.coordinates: 
			square = canvas.create_rectangle( 
				x, y, x + SpaceSize, y + SpaceSize, 
			fill=SNAKE, tag="snake") 
			self.squares.append(square) 


class Food: 

	def __init__(self): 

		# Generating food randomly anywhere in the game 
		x = random.randint(0, 
			(width // SpaceSize)-1) * SpaceSize 
		y = random.randint(0, 
			(Height // SpaceSize) - 1) * SpaceSize 

		self.coordinates = [x, y] 

		# Giving shape of the food 
		canvas.create_oval(x, y, x + SpaceSize, y +
						SpaceSize, fill=FOOD, 
						tag="food") 
		

def change_direction(new_direction): 
  
    global direction 
  
    if new_direction == 'left': 
        if direction != 'right': 
            direction = new_direction 
    elif new_direction == 'right': 
        if direction != 'left': 
            direction = new_direction 
    elif new_direction == 'up': 
        if direction != 'down': 
            direction = new_direction 
    elif new_direction == 'down': 
        if direction != 'up': 
            direction = new_direction


def next_turn(snake, food): 

	x, y = snake.coordinates[0] 

	if direction == "up": 
		y -= SpaceSize 
	elif direction == "down": 
		y += SpaceSize 
	elif direction == "left": 
		x -= SpaceSize 
	elif direction == "right": 
		x += SpaceSize 

	snake.coordinates.insert(0, (x, y)) 

	square = canvas.create_rectangle( 
		x, y, x + SpaceSize, y + SpaceSize, fill=SNAKE) 

	snake.squares.insert(0, square) 

	if x == food.coordinates[0] and y == food.coordinates[1]: 

		global score 

		score += 1

		label.config(text="Points:{}".format(score)) 

		canvas.delete("food") 

		food = Food() 

	else: 

		del snake.coordinates[-1] 

		canvas.delete(snake.squares[-1]) 

		del snake.squares[-1] 

	# if collision of the snake happens then 
	# game over function is called 
	if check_collisions(snake): 
		game_over() 

	else: 
		window.after(speed, next_turn, snake, food) 
		


window = Tk() 
window.title("GFG Snake game ") 


score = 0
direction = 'down'

# Display of Points Scored in Game 

label = Label(window, 
			text="Points:{}".format(score), 
			font=('consolas', 20)) 
label.pack() 

canvas = Canvas(window, bg=BACKGROUND, 
				height=Height, width=width) 
canvas.pack() 

window.update() 

window_width = window.winfo_width() 
window_height = window.winfo_height() 
screen_width = window.winfo_screenwidth() 
screen_height = window.winfo_screenheight() 

x = int((screen_width/2) - (window_width/2)) 
y = int((screen_height/2) - (window_height/2)) 

window.geometry(f"{window_width}x{window_height}+{x}+{y}") 

window.bind('<Left>', 
			lambda event: change_direction('left')) 
window.bind('<Right>', 
			lambda event: change_direction('right')) 
window.bind('<Up>', 
			lambda event: change_direction('up')) 
window.bind('<Down>', 
			lambda event: change_direction('down')) 

snake = Snake() 
food = Food() 

next_turn(snake, food) 

window.mainloop()
		



