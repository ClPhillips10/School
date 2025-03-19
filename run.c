#include<stdio.h>

#define MYLIB_H
int main(){
    
    double startTimeHours;
    double startTimeMin;
    double endTimeHours;
    double endTimeMin;
    printf("Enter the start time: ");

    scanf("%lf", &startTimeHours);
    scanf("%lf", &startTimeMin);
    printf("Enter the End time: ");
    
    scanf("%lf", &endTimeHours);
    scanf("%lf", &endTimeMin );
    double totalHours = endTimeHours - startTimeHours;
    //printf("%lf", totalHours);
    double totalMin = endTimeMin - startTimeMin;
    double hoursDistance = 8.0 * totalHours;
    double minDistance = (8.0 / 60.0) * totalMin ;
    double final = hoursDistance + minDistance;
    printf("You have run %lf miles", final);
}