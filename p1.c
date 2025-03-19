#include <stdio.h>
#include <math.h>
//Review
int main(){
    const int twenties = 20;
    const int tens = 10;
    const int fives = 5;
    const int ones = 1;
    const double quarters = 0.25;
    const double dimes = 0.10;
    const double nickles = 0.05;
    const double pennies = 0.01;

    const double billDiameter = 6.14;
    const double quarterDiameter = 0.955;
    const double dimeDiameter = 0.705;
    const double nickleDimeter = 0.835;
    const double pennyDiameter = 0.750;
    
    int numof20;
    int numof10;
    int numof5;
    int numof1;
    int numofQuarter;
    int numofDimes;
    int numofNickles;
    int numofPennies;

    //Get amount of 20 dollar bills and set to numof20
    //printf("Enter the number of $20s: ");
    scanf("%d", &numof20);
    //Get amount of 10 and set to numof10
    //printf("Enter the number of $10s: ");
    scanf("%d", &numof10);
    //get amount of 5 and set to numof5
    //printf("Enter the number of $5s: ");
    scanf("%d", &numof5);
    //get amount of 1 and set to numof1
    //printf("Enter the number of $1s: ");
    scanf("%d", &numof1);
    //get amount of quarters and set tot numofQuarters
   // printf("Enter the number of quarters: ");
    scanf("%d", &numofQuarter);
    //get amount of dimes and set to numofDimes
   // printf("Enter the number of dimes: ");
    scanf("%d", &numofDimes);
    //get num of Nickles and set to num of nickles
   // printf("Enter the number of nickels: ");
    scanf("%d", &numofNickles);
    //get Num of pennies and set to num pennies. 
   // printf("Enter the number of pennies: ");
    scanf("%d", &numofPennies);
    double change;
    double finalAmount = (numof20 * twenties) + (numof10 * tens) + (numof5 * fives) + (numof1 * ones) 
    + (numofQuarter * quarters) + (numofDimes * dimes) + (numofNickles * nickles) + (numofPennies * pennies);
   // change = fmod(finalAmount, 100);
    //printf("%lf NUMBER", finalAmount);
    int finalDollars = finalAmount;
    change = (finalAmount - finalDollars) * 100;
    change = round(change);
    //change = fmod(finalAmount , 0.100);
    printf("You have %d dollars and %.0lf cents\n", finalDollars, change);
    double finalDistance = ((numof20 + numof10 + numof5 + numof1) * billDiameter)  + (numofQuarter * quarterDiameter) + 
    (numofDimes * dimeDiameter) + (numofNickles * nickleDimeter) + (numofPennies * pennyDiameter);
    finalDistance = round(finalDistance);
    printf("The length of your money is roughly %.0lf inches\n", finalDistance);
    return 0;
}


/*
properly formated print statements-------
Enter the number of $10s:  1
Enter the number of $5s:  4
Enter the number of $1s:  15
Enter the number of quarters:  9
Enter the number of dimes:  26
Enter the number of nickels:  53
Enter the number of pennies:

money length------
All bills are 6.14in long.
Quarters have a 0.955in diameter.
Dimes have a 0.705in diameter.
Nickels have a 0.835in diameter.
Pennies have a 0.750in diameter.

final output should read---
You have 113 dollars and 8 cents
The length of your money is roughly 256 inches*/