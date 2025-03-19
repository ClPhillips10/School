#include <stdio.h>
#include <ctype.h> 
#include <string.h>

int main() {
    int x = 0;
   char word[50];
   printf("Enter how many words:\n");
   int numWords = 1;
   scanf("%d", &numWords);
   char final[20];
   printf("Enter %d words:\n", numWords);
    for(int i = 0; i < numWords; i++)
    {
        scanf("%s", word);
        //char word[] = "GeNeRal KenObiE";
        if(strlen(word) > 3)
        {
        for(int j = 0; j < strlen(word); j++)
        {
            if(isupper(word[j]))
            {
                final[x] = word[j];
                x++;
            }
        }
        }
    }
    printf("The result is '%s'\n", final);

    return 0;
}
