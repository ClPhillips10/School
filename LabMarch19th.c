#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ExactChange(int userTotal, int coinVals[])
{
    int quarters = 0;
    int dimes = 0;
    int nickles = 0;
    int pennies = 0;
    if(userTotal == 0)
    printf("no change\n");
    else if(userTotal > 0)
    {
        while(userTotal > 0)
        {
        while(userTotal - 25 > -1)
        {
            quarters ++;
            userTotal = userTotal - 25;
        }
        while(userTotal - 10 > -1)
        {
            dimes ++;
            userTotal = userTotal - 10;
        }
        while(userTotal - 5 > -1)
         {
            nickles ++;
            userTotal = userTotal - 5;
        }
        while (userTotal - 1 > -1)
        {
            {
            pennies ++;
            userTotal = userTotal - 1;
        }
        }
        
            
        

        }

    }
    
    //Pennies
    if(pennies > 1)
    printf("%d pennies\n", pennies);
    else if (pennies == 1)
    printf("%d penny\n", pennies);
    // Nickle
    if(nickles > 1)
    printf("%d nickles\n", nickles);
    else if (nickles == 1)
    printf("%d nickle\n", nickles);
    //Dimes
    if(dimes > 1)
    printf("%d dimes\n", dimes);
    else if(dimes == 1)
    printf("%d dime\n", dimes);
    //qurter
    if(quarters > 1)
    printf("%d quarters\n", quarters);
    else if (quarters == 1)
    printf("%d quarter\n", quarters);
    
    
    

    //printf("%d\n%d\n%d\n%d", quarters, dimes, nickles, pennies);

}
int main(){
    int userTotal = 84;
    int coinVals[] = {1, 5, 10, 25};
    ExactChange(userTotal, coinVals);

}