#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int length = 0;

    // Input
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    // Point to the beginning of the string
    ptr = str;

    // Loop through the string using pointer until null character
    while (*ptr != '\0') {
        if (*ptr != '\n')  // To ignore newline character from fgets
            length++;
        ptr++;
    }

    // Output
    printf("The length of a string is: %d\n", length);

    return 0;
}
