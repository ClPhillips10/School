#include <stdio.h>


    int main() {
    int myNum;
    
    scanf("%d", &myNum);

    if (myNum <= 0) {
        return 0;
    }

    for (int i = 0; i < myNum; i++) {
       
       
        for (int k = 0; k < myNum; k++) {
            
            if (i == 0 || i == myNum - 1 || k == 0 || k == myNum - 1) {
                printf("x");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
    
    
    
    
 