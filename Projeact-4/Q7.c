#include <stdio.h>

int main() {


    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= 5; col++) {
            if (row == 1 || row == 3) {
                printf("* ");
            }
            else if (row == 2) {
                if (col == 1 || col == 5) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
            else if (row == 4 || row == 5) {
                if (col == 1) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
