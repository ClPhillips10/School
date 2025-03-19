#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int CheckPositiveInteger(char token[]){
    
    int values[strlen(token)];
    int u = 0;
    int legit = 0;
    int decimal = 0;
    int compare = strlen(token);
    for(int i = 0; i < strlen(token); i++)
    {
        if((token[i] >= '0') && (token[i] <= '9'))
        {
            //printf("%d is a number\n", token[i]);
            legit ++;
            if(token[i] == '.')
            decimal = 1;

        }
        
    }
    if(legit == compare)
    {
    printf("The token is a positive integer\n");
    return 1;
    }
    else if (legit == compare - 1 && token[0] == '-')
    {
    printf("The token is a negative integer\n");
    return 1;
    }
    
    return 0;
}
int CheckIfIsBinary(char token[]){
    int values[strlen(token)];
    int u = 0;
    int legit = 0;
    int decimal = 0;
    int compare = strlen(token) - 2;
    for(int i = 2; i < strlen(token); i++)
    {
        if((token[i] >= '0') && (token[i] <= '1'))
        {
            //printf("%d is a number\n", token[i]);
            legit ++;
            


        }
        
    }
    
    
    if (legit == compare && compare > 0)
    {
    printf("The token is a binary number\n");
    return 1;
    }
   
   return 0;
    

}
int CheckIfGUID(char token[]){
    int valid = 0;
    for(int i = 0; i < strlen(token); i++)
    {
        if((token[i] >= '0' && token[i] <= '9') || (token[i] >= 'A' && token[i] <= 'F') || (token[i] >= 'a' && token[i] <= 'f') || token[i] == '-')
        valid ++;
    }    
    if(valid == 36)
    {
    printf("The token is a guid\n");
    return 1;
    }
return 0;
}
int CheckFloatingPoint(char token[])
{
    int isItTrue = 0;
    for(int i = 0; i < strlen(token); i++)
    {
        
        if(token[i] == '.')
        {
        isItTrue = 1;
        i = strlen(token);
        }
        else 
        isItTrue = 0;
    }
    if(isItTrue == 1 && token[0] != '-')
    {
        printf("The token is a positive floating-point number\n");
        return 1;
    }
    else if(isItTrue == 1)
        {
        printf("The token is a negative floating-point number\n");
        return 1;
        }

return 0;
}
int main (){
    int intValue = 0;
    int binaryValue = 0;
    int guidValue = 0;
    int floatingValue = 0;
    
    while(!feof(stdin))
    {   
        char token[1000000] = "";
        intValue = 1;
        printf("Enter a token to identify, EOF to stop:\n");
        scanf("%s", token);
        //char token[] = "7d430162-0cc9-46ab-8abf-2ae6d62fd334";

        
        if(strlen(token) > 0)
        {
        intValue = CheckPositiveInteger(token);
        if(token[1] == 'b' && token[0] == '0')
        binaryValue = CheckIfIsBinary(token);
        else 
        binaryValue = 0;
        if(token[8] == '-' && token[13] == '-' && token[18] == '-' && token[23] == '-')
        guidValue = CheckIfGUID(token);
        else
        guidValue = 0;
        floatingValue = CheckFloatingPoint(token);
        }
        if(intValue == 0 && binaryValue == 0 &&  guidValue  == 0 && floatingValue == 0)
        {
        printf("The token cannot be identified\n");
        
        intValue = 0;
        binaryValue = 0;
        guidValue = 0;
        floatingValue = 0;
        }

        


    }

    return 0;
}