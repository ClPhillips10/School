#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countCase(char str[], int *pNumUpper, int *pNumLower);

int main() {
    char input[10000];
    int numUpper, numLower;

    if (fgets(input, sizeof(input), stdin) != NULL) {
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
        }


        char *word = strtok(input, " "); 
        while (word != NULL) {
            countCase(word, &numUpper, &numLower);

    
            printf("%s: %d uppercase, %d lowercase\n", word, numUpper, numLower);

            word = strtok(NULL, " ");
        }
    }

    return 0;
}


void countCase(char str[], int *pNumUpper, int *pNumLower) {
    *pNumUpper = 0; 
    *pNumLower = 0; 

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            (*pNumUpper)++; 
        } else if (islower(str[i])) {
            (*pNumLower)++; 
        }
    }
}