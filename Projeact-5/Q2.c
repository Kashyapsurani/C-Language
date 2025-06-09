#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols];
    int count = 1;


    printf("Enter array's elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element %d: ", count);
            scanf("%d", &a[i][j]);
            count++;
        }
    }

    int max = a[0][0];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    printf("The largest element is: %d\n", max);

    return 0;
}
