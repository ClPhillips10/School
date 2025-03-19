#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
int numberSize = 0;
printf("Enter how many numbers: ");
scanf("%d", &numberSize);

int numbers[numberSize];
int numElements = sizeof(numbers) / sizeof(numbers[0]);
double mean = 0;
for(int i = 0; i < numElements; i++)
{
    scanf("%d", &numbers[i]);
     mean += numbers[i];
}

double total = mean / numElements;
printf("mean: %.3lf", total); 
return 0;
}