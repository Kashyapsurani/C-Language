#include <stdio.h>

int main() {
    float angle1, angle2, angle3;
    
    printf("Enter first angle (in degrees): ");
    scanf("%f", &angle1);
    printf("Enter second angle (in degrees): ");
    scanf("%f", &angle2);
    
    if (angle1 + angle2 >= 180) {
        printf("Error:= angles must be less than 180°.\n");
        return 1;
    }

    angle3 = 180 - (angle1 + angle2);
    printf("Third angle: %f°\n", angle3);
    
    return 0;
}
