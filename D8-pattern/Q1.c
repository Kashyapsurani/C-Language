#include <stdio.h>

int main() {


    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            if (row == 0 || row == 2) {
                printf("*");
            } else if (col == 0 || col == 4) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
