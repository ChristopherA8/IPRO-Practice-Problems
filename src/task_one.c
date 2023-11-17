#include <stdio.h>

int main() {

    int rows = 0, columns = 0;
    printf("Dimensions: ");
    scanf("%d", &rows);
    scanf("%d", &columns);
    printf("Elements: ");

    int array[rows][columns];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("Sum of all members: ");
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum += array[i][j];
        }
    }

    printf("%d\n", sum);

    return 0;
}