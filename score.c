#include <stdio.h>

int main (){
    
    int score1;
    int score2;
    int score3; 
    int score4;
    scanf("%d %d %d %d", &score1, &score2, &score3, &score4);
    int lowest = score1;
    if(score2 < lowest)
    lowest = score2;
    if(score3 < lowest)
    lowest = score3;
    if(score4 < lowest)
    lowest = score4;
    double avg = (score1 + score2 + score3 + score4 - lowest) / 3.0;
    printf("%lf", avg);


    return 0;
}