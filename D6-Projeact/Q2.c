#include <stdio.h>

int count_digits(int number) {
    int count = 0;

    // Handle the case for number 0
    if (number == 0) {
        return 1;  // 0 has 1 digit
    }

    // Handle negative numbers by converting to positive
    if (number < 0) {
        number = -number;
    }

    // Count digits by dividing the number by 10
    while (number > 0) {
        number = number / 10;  // Remove the last digit
        count++;  // Increment the digit count
    }

    return count;
}

int main() {
    int num;

    // Input number from user
    printf("Enter any number: ");
    scanf("%d", &num);

    // Call the function to count digits
    printf("Total number of digits: %d\n", count_digits(num));

    return 0;
}
