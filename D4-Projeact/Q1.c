#include <stdio.h>

int main() {
    float c, f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9.0 / 5.0) + 32;
    printf("Celsius into Fahrenheit: %f °F\n", f);

    return 0;
}
