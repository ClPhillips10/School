#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int CoinFlip(){
    return rand();
}

int main(void) {
   int final = 0;

   srand(2);  /* Unique seed */
final = CoinFlip();
    if(final == 0)
    printf("Heads");
    else
    printf("Tails");

    printf("%d", final);
   
   
   return 0;
}
