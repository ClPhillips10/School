#include <stdio.h>
#include <string.h>


int main() {
    char input[50]; // Word buffer, max length 49 + null terminator
    int vowelAs = 0, vowelEs = 0, vowelIs = 0, vowelOs = 0, vowelUs = 0;

    while (scanf("%s", input) != EOF) { // Read words until EOF
        for (int i = 0; i < strlen(input); i++) {
            switch (input[i]) {
                case 'a': vowelAs++; break;
                case 'e': vowelEs++; break;
                case 'i': vowelIs++; break;
                case 'o': vowelOs++; break;
                case 'u': vowelUs++; break;
                default: break;
            }
        }
    }

    printf("The vowel a occurred %d times\n", vowelAs);
    printf("The vowel e occurred %d times\n", vowelEs);
    printf("The vowel i occurred %d times\n", vowelIs);
    printf("The vowel o occurred %d times\n", vowelOs);
    printf("The vowel u occurred %d times\n", vowelUs);

    return 0;
}

    
    
