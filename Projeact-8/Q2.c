#include <stdio.h>

// User Defined Function to calculate and print cubes
void printCubes(int *arr, int rows, int cols) {
    printf("\nCubes of all elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int val = *(arr + i * cols + j);
            int cube = val * val * val;
            printf("Cube of a[%d][%d] = %d\n", i, j, cube);
        }
    }
}

int main() {
    int size;
    printf("Enter array's size: ");
    scanf("%d", &size);

    int a[size][size];

    // Input
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Function call with pointer
    printCubes(&a[0][0], size, size);

    return 0;
}
