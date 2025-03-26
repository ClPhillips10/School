#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <input file> <output file>\n", argv[0]);
        return 1;
    }

    FILE *inputFile = fopen(argv[1], "r");
    if (!inputFile) {
        printf("Cannot open file '%s'\n", argv[1]);
        return 1;
    }

    FILE *outputFile = fopen(argv[2], "w");
    if (!outputFile) {
        printf("Cannot open file '%s'\n", argv[2]);
        fclose(inputFile);
        return 1;
    }

    char str[51];
    while (fgets(str, sizeof(str), inputFile)) {
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }

        int isValid = 1;
        for (int i = 0; str[i] != '\0'; i++) {
            if (!isalpha(str[i])) {
                isValid = 0;
                break;
            }
        }

        if (isValid) {
            fprintf(outputFile, "%s\n", str);
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}