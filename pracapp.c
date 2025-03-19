#include <stdio.h>

int main(void) {
   const int NUM_ELEMENTS = 9;
   int userValues[NUM_ELEMENTS];    // Set of data specified by the user

   while(1)
   {
    int i = 0;
    scanf("%d", &userValues[i]);
    if(userValues[i] < 0)
        break;
    i++;
   }
   int size = sizeof(userValues);
   for(int i = 0, j = sizeof(userValues); i <= j; i++, j--)
    if (i == j)
    printf("%d", userValues[j]);

   return 0;
}