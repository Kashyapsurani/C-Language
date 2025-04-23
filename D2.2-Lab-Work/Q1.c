#include <stdio.h>

int main() {
    float  PI = 3.14159;  
    float radius = 5.0; 
    float area;

    // Calculate the area
    area = PI * radius * radius;

    // Display the result
    printf("Area of the circle is: %.2f\n", radius, area);

    return 0;
}
