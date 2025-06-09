#include <stdio.h>

int main() {
    int n, f_d, l_d;
    
    printf("Enter any number: ");
    scanf("%d", &n);
    
    l_d = n % 10;
    
    f_d = n;
    while (f_d >= 10) {
        f_d = f_d / 10;
    }
    
    int sum = f_d + l_d;
    printf("The sum of the first and the last digit: %d\n", sum);
    
    return 0;
}
