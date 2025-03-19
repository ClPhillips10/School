#include <stdio.h>
#include <string.h>

char Guess(){

}
int main(){
    char word[20];
    char guess;
    int incorrect = 0;
    int u = sizeof(word)/ sizeof(word[0]);
    while(incorrect == 0)
    {
        printf("Guess a letter: ");
        scanf("%c", &guess);
        for(int i; i < u; i++)
        {
            if (word[i] == word )
            printf("%c", &word);
        }
    }


}