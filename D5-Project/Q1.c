#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    if (score >= 90 && score <= 100) {
        grade = 'A';
    } else if (score >= 80 && score < 90) {
        grade = 'B';
    } else if (score >= 70 && score < 80) {
        grade = 'C';
    } else if (score >= 60 && score < 70) {
        grade = 'D';
    } else if (score >= 50 && score < 60) {
        grade = 'E';
    } else if (score >= 0 && score < 50) {
        grade = 'F';
    } else {
        printf("Invalid score entered.\n");
        return 1; 
    }

    printf("Your grade is %c\n", grade);

    return 0;
}
