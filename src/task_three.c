#include <stdio.h>

int main() {

    char input[20];
    printf("Name: ");
    fgets(input, 51, stdin);

    // Make first letter uppercase
    input[0] -= 32;
    printf("Result: %s", input);
    
    return 0;
}
