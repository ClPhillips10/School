#include <stdio.h>
#include <digits.c>
void printing(int, int);

int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printing(num1, num2);


}

void printing(int a, int b)
{
    printf("%d", a - b);

}