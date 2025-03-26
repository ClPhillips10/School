#include <stdio.h>
#include <string.h>

void reverse(char str[]);

int main() {

    char word[50];
    printf("Enter a word:\n");
    scanf("%s", word);

    reverse(word);

    printf("The reversed word is: %s\n", word);

    return 0;
}

void reverse(char str[]) {
    int len = strlen(str);
    // for (int i = 0; i < len / 2; i++) {
    //     char ch = str[i];
    //     str[i] = str[len - 1 - i];
    //     str[len - 1 - i] = ch;
    // }

    int front = 0;
    int back = len - 1;
    while (front < back) {
        char ch = str[front];
        str[front] = str[back];
        str[back] = ch;

        front++;
        back--;
    }
}