#include <stdio.h>
#include<math.h>

int main(){
    float num1;
    float num2;
    float num3;
    float num4;
    printf("Enter num 1: ");
    scanf("%f", &num1);
    printf("Enter num 2: ");
    scanf("%f", &num2);
    printf("Enter num 3: ");
    scanf("%f", &num3);
    printf("Enter num 4: ");
    scanf("%f", &num4);
    
    float sum = (num1 + num2 + num3 + num4) / 4;
    printf("The average is %f", sum);
    return 0;

    }
