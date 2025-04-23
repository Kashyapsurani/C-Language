#include <stdio.h>

int main() {
    int a = 5;  
    int b = 10; 
    int swap;

    printf("Before swap:= a = %d, b = %d\n", a, b);

    swap = a;
    a = b;
    b = swap;

    printf("After swap := a = %d, b = %d\n", a, b);

    return 0;
}
