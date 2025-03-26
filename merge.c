#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <file1> <file2>\n", argv[0]);
        return 1;
    }

    FILE *file1 = fopen(argv[1], "r");
    if (!file1) {
        printf("Cannot open file '%s'\n", argv[1]);
        return 1;
    }

    FILE *file2 = fopen(argv[2], "r");
    if (!file2) {
        printf("Cannot open file '%s'\n", argv[2]);
        fclose(file1);
        return 1;
    }

    int num1, num2;
    int read1 = fscanf(file1, "%d", &num1);
    int read2 = fscanf(file2, "%d", &num2);

    while (read1 == 1 && read2 == 1) {
        if (num1 < num2) {
            printf("%d ", num1);
            read1 = fscanf(file1, "%d", &num1);
        } else if (num1 > num2) {
            printf("%d ", num2);
            read2 = fscanf(file2, "%d", &num2);
        } else {
            printf("%d ", num1);
            read1 = fscanf(file1, "%d", &num1);
            read2 = fscanf(file2, "%d", &num2);
        }
    }

    while (read1 == 1) {
        printf("%d ", num1);
        read1 = fscanf(file1, "%d", &num1);
    }

    while (read2 == 1) {
        printf("%d ", num2);
        read2 = fscanf(file2, "%d", &num2);
    }

    printf("\n");

    fclose(file1);
    fclose(file2);

    return 0;
}