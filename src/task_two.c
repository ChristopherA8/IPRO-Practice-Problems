#include <stdio.h>

int main() {

    int dimension;
    printf("Dimension: ");
    scanf("%d", &dimension);

    int array[dimension][dimension];
    printf("Elements: ");
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("Reversed: \n");
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            printf("%d ", array[i][dimension - j - 1]);
        }
        printf("\n");
    }

    return 0;
}

