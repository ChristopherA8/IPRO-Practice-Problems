#include <stdio.h>
#include <string.h>

int main() {

    char string[50];
    printf("String: ");
    fgets(string, 51, stdin);

    printf("Vowels: ");
    for (int i = 0; i < strlen(string); i++) {
        if ((string[i] == 'a') || (string[i] == 'e') || (string[i] == 'i') || (string[i] == 'o') || (string[i] == 'u') || (string[i] == 'A') || (string[i] == 'E') || (string[i] == 'I') || (string[i] == 'O') || (string[i] == 'U')) {
            printf("%c", string[i]);
        }
    }
    

    return 0;
}