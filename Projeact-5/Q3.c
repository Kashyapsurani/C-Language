////#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the array's row & column size: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols];
    int transpose[cols][rows];

    printf("Enter array's elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("The transpose matrix of an array:\n");
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
