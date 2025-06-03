#include <stdio.h>

int main() {
    for (int row = 65; row <= 69; row++) {
        int data = row;
        for (int col = 65; col <= row; col++) {
            printf("%c ",data--);
        }
        printf("\n");
    }
    return 0;
}
