#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    if (score >= 90) {
        grade = 'A';
        printf("Your grade is A. Excellent work! ");
    } else if (score >= 80) {
        grade = 'B';
        printf("Your grade is B. Good job! ");
    } else if (score >= 70) {
        grade = 'C';
        printf("Your grade is C. Nice effort! ");
    } else if (score >= 60) {
        grade = 'D';
        printf("Your grade is D. You passed! ");
    } else {
        grade = 'F';
        printf("Your grade is F. Needs improvement. ");
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
        printf("You are eligible for the next level.\n");
    } else {
        printf("Please try again next time.\n");
    }

    return 0;
}
