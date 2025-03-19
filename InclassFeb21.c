#include <stdio.h>
#include <string.h>
#include <math.h>
int Sum(int,int);
double Average(int,int);
int main(){
    int x,y,sum;
    int array[2];
    printf("INput 2 numbers:\n");
    scanf("%d %d", &array[0],&array[1]);
    printf("%d", Sum(array[0],array[1]));
    printf("%lf", Average(x,y));

}

int Sum(int num1, int num2){
    Average(num1,num2);
    return num1 + num2;
}

double Average(int num1, int num2){
    printf("%lf",(num1 + num2) / (double)2);
    return 0;
}