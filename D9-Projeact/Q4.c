#include <stdio.h>

int main() {

    for (int row = 5; row >= 1; row--) {
        for (int col = 1; col <= row; col++) {
            if (col % 2 == 1) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}
