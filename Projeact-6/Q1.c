#include <stdio.h>

int main() {
    char str[] = "132";
    int length = 0, isPalin = 1;

    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalin = 0;
            break;
        }
    }

    if (isPalin) {
        printf("The given string is a Palindrome Your Enterd Value Is %s.\n",str);
    } else {
        printf("The given string is Not a Palindrome Because Your Enterd Value Is %s.\n",str);
    }

    return 0;
}
