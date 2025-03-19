#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ReversedString(char[]);
int main(){
    char string2[1000];
    char string1[1000];
   int x;
   scanf("%d", &x);
   //int x = 12;
    //scanf("%s", string2);
    //char string2[100] = "Hello There kenobi Hows it goin g";
    for(int i = 0; i < 3; i++)
    {
        scanf("%s", string2);
        if(string2 > 0)
        {
            //strcpy(string1,string2);
            ReversedString(string2);
        }
    }
    
    return 0;
}

void ReversedString(char string2[])
{
char string1[1000];
for(int i = 0, j = strlen(string2) - 1; i < strlen(string2); i++, j--)
{
    string1[i] = string2[j];

}
for(int i = 0; i < strlen(string2); i++)
{
    if(/*(string1[i] >= 'a' && string1[i] <= 'z') || (string1[i] >= 'A' && string1[i] <= 'Z')*/ isalpha(string1[i]) || isspace(string1[i]))
        {
        if(isspace(string1[i]))
            printf(" ");
        else{
            printf("%c",string1[i]);
        }

        }

}
printf("\n");

}