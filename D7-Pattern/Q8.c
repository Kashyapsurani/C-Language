#include <stdio.h>

int main() {
    int num = 1;

    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= row; col++) {      
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}
