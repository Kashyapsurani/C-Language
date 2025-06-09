#include <stdio.h>

int main() {
    char alphabets[] = "abcdefghijklmnopqrstuvwxyz"; 

    for (int i = 0; i < 26; i += 4) {
        printf("%c ", alphabets[i]);
    }

    return 0;
}
