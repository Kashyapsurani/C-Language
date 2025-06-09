#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int array[rows][cols];

    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int rowNum, colNum;

    // Input row number and calculate sum
    printf("Enter row number: ");
    scanf("%d", &rowNum);
    if (rowNum < 0 || rowNum >= rows) {
        printf("Invalid row number.\n");
        return 1;
    }

    int rowSum = 0;
    printf("Elements of row %d: ", rowNum);
    for (int j = 0; j < cols; j++) {
        printf("%d ", array[rowNum][j]);
        rowSum += array[rowNum][j];
    }
    printf("\nThe sum of a row %d: %d\n", rowNum, rowSum);

    // Input column number and calculate sum
    printf("Enter column number: ");
    scanf("%d", &colNum);
    if (colNum < 0 || colNum >= cols) {
        printf("Invalid column number.\n");
        return 1;
    }

    int colSum = 0;
    printf("Elements of column %d: ", colNum);
    for (int i = 0; i < rows; i++) {
        printf("%d ", array[i][colNum]);
        colSum += array[i][colNum];
    }
    printf("\nThe sum of column %d: %d\n", colNum, colSum);

    return 0;
}
