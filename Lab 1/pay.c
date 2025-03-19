#include <stdio.h>
#include <math.h>

int main(){
    double hourlyWage;
    int hoursWorked;
    double final;
    int overTime;
    printf("Enter hourly Wage: ");
    scanf("%lf %d", &hourlyWage, &hoursWorked);
    //printf("Enter hours Worked: ");
    //scanf("%d\n", &hoursWorked);
    
    int extra = 0;
    
    if(hoursWorked > 40)
    overTime = hoursWorked - 40;
    if(hoursWorked < 41)
    final = hourlyWage * hoursWorked;
    else if(hoursWorked > 40 && hoursWorked < 51)
    {
    final = (hourlyWage * 40) + ((hourlyWage * 1.5) * overTime);
    }
    else if (hoursWorked > 50)
    {
        final = (hourlyWage * 40) + ((hourlyWage * 1.5) * 10);
        
        for (int i = 51; i <= hoursWorked; i++)
        {
            extra += (hourlyWage * 2.0);
        }
        final += extra;
        
    }
    printf("$%lf", final);
    return 0;


}