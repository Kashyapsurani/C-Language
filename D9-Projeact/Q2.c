#include <stdio.h>

int main() {
    int num = 11; 

    for (int row = 1; row <= 4; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
