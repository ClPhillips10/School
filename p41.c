#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int CheckPositiveInteger(char token[]){
    
    int values[strlen(token)];
    int u = 0;
    int legit = 0;
    int compare = strlen(token);
    for(int i = 0; i < strlen(token); i++)
    {
        if((token[i] >= '0') && (token[i] <= '9'))
        {
            //printf("%d is a number\n", token[i]);
            legit ++;

        }
        
    }
    if(legit == compare)
    {
    printf("The token is a positive integer\n");
    return 1;
    }
    else if (legit == compare - 1 && token[0] == '-')
    {
    printf("The token is a negative integer");
    return 1;
    }
    return 1;
}
void CheckIfIsBinary(char token[]){
    int values[strlen(token)];
    int u = 0;
    int legit = 0;
    int compare = strlen(token) - 2;
    for(int i = 1; i < strlen(token); i++)
    {
        if((token[i] >= '0') && (token[i] <= '1'))
        {
            //printf("%d is a number\n", token[i]);
            legit ++;

        }
        
    }
    if(token[0] == '0' && token[1] == 'b')
    {
    if (legit == compare)
    printf("The token is a binary number\n");
    
    
    }

}
void CheckIfGUID(char token[]){
    printf("The token is a guid\n");
}
int main (){
    
    while(!feof(stdin))
    {   
        char token[1000000];
        printf("Enter a token to identify, EOF to stop:\n");
        scanf("%s", token);
        if(strlen(token) > 0)
        {
        CheckPositiveInteger(token);
        if(token[1] == 'b' && token[0] == '0')
        CheckIfIsBinary(token);
        if(token[8] == '-')
        CheckIfGUID(token);
        }


    }

    return 0;
}