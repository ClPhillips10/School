#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *toUpperString(const char str[]) {
    if (str == NULL) {
        return NULL;
    }
    char *result = malloc(strlen(str) + 1);
    if (result == NULL) {
        return NULL;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        result[i] = toupper(str[i]);
    }
    result[strlen(str)] = '\0';
    return result;
}

int main(int argc, char **argv) {
   if (argc != 2) {
      printf("Usage: %s string\n", argv[0]);
      return 1;
   }
   char *og = argv[1];
   
   char *upper = toUpperString(og);
   if (upper == NULL) {
      printf("toUpperString() is not implemented or returned NULL\n");
   }
   else {
      printf("Original: \"%s\"\n", og);
      printf("Uppercase: \"%s\"\n", upper);
      free(upper);
   }
   
   return 0;
}