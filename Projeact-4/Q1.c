#include <stdio.h>

int main() {

    for (int row = 1; row <= 5; row++) {
        for (int col = 41; col < 41 + row; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }

    return 0;
}
