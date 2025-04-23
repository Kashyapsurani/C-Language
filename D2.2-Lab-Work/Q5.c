#include <stdio.h>


int main() {
    float PI = 3.14159;
    float radius = 7.0; 
    float perimeter;

    perimeter = 2 * PI * radius;

    printf("Perimeter of circle with radius %f is: %f\n", radius, perimeter);

    return 0;
}
