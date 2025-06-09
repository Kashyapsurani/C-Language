#include <stdio.h>

int main() {
    int size, i, first = 1;

    // Input array size
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int a[size];

    // Input each array element one by one
    for(i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Print negative elements
    printf("Negative elements from an Array: ");
    for(i = 0; i < size; i++) {
        if(a[i] < 0) {
            if (!first) {
                printf(", ");
            }
            printf("%d", a[i]);
            first = 0;
        }
    }

    if (first) {
        printf("None");
    }

    printf("\n");

    return 0;
}
