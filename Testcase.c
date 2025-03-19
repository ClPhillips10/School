#include <stdio.h>

int main(void) {
    //double score;
   /* printf("Enter your score: ");
   scanf("%lf", &score);
   if(score >= 90)
   {
    printf("You got an A");
   }
   else if (score >= 80 && score < 90)
   {
    printf("You got a B");
   }
   else if (score >= 70 && score < 80)
   {
    printf("You got a C");
   }
   else
   {
    printf("You failed");
   }*/
  /*int int1;
  int int2;
  int int3;
  scanf("%d %d %d", &int1, &int2, &int3);
   
    if(int1 == int2 && int1 == int3)
    {
        printf("All ints match");
    }
    else if (int1 == int2)
    {
        printf("int 1 and 2 match");
    }
    else if (int2 == int3)
    {
        printf("Int 2 and 3 match");
    }
    else if (int1 == int3)
    {
        printf("int 1 and 3 match");
    }
    else
    {
        printf("No ints match");
    }
    */

   int a;
   int b; 
   int c; 
    scanf("%d %d %d", &a , &b, &c);
    int max = a;
    int min = a;
    int other = c;
    int temp;
    if(b > max)
    max = b;
    if (b < min)
    {
        temp = min;
        min = b;
        other = temp;
    }
    if (c > max)
    {
        temp = c;
        max = c;
        other = temp;
    }
    if(c < min)
    {
        min = c;
    }
    printf("%d %d", max, min);
    
   return 0;
}