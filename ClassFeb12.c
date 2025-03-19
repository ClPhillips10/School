#include <stdio.h> 
#include <ctype.h>
#include <string.h>
int main(){
    /*char word[100];
    printf("Enter a word: ");
    scanf("%s", word);

    int count = 0;
    if(strcmp(word, "STOP") == 0)
        {
        printf("You entered STOP\n");
        return 0;
        }
    for(int i = 0; i < strlen(word); i++)
    {
        if(isupper(word[i]))
       count ++;
       else
       break;
    }
    if(count == strlen(word))
    {
        printf("Word only contains uppercase");
    }
    else
    printf("Word does not only contain uppercase");*/
    char input[20]; 
    scanf("%s", input);
    char final[13];
    for(int i = 0 ; i < 3; i++)
    {
       final[i] = input[i];
    }


   
    
    return 0; 
}