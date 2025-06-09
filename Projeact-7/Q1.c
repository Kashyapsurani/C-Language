#include <stdio.h>

// Function declarations


int main() {
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    float divide(int a, int b);
    int mod(int a, int b);
    int choice, a, b;
    
    while (1) {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting the program.\n");
            break;
        }

        // Get two numbers
        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);
          printf("\n");

        // Switch case for operations
        switch (choice) {
            case 1:
                printf("- - - - - - - - - - - - - - - - - - - \n \n" );
                printf("Addition of %d and %d is %d\n \n", a, b, add(a, b));
                   printf("- - - - - - - - - - - - - - - - - - - \n \n" );
                break;
            case 2:
                            printf("- - - - - - - - - - - - - - - - - - - \n \n" );

                printf("Subtraction of %d and %d is %d\n !\n", a, b, subtract(a, b));
                   printf("- - - - - - - - - - - - - - - - - - - \n \n" );
                break;
            case 3:
                            printf("- - - - - - - - - - - - - - - - - - - \n \n" );

                printf("Multiplication of %d and %d is %d\n !\n", a, b, multiply(a, b));
                   printf("- - - - - - - - - - - - - - - - - - - \n \n" );
                break;
            case 4:
                                        printf("- - - - - - - - - - - - - - - - - - - \n \n" );

                if (b != 0)
                    printf("Division of %d and %d is %.2f\n", a, b, divide(a, b));
                else
                    printf("Cannot divide by zero!\n !\n");
                       printf("- - - - - - - - - - - - - - - - - - - \n \n" );
                break;
            case 5:
            
            printf("- - - - - - - - - - - - - - - - - - - \n \n" );
                if (b != 0)

                    printf("Modulus of %d and %d is %d\n", a, b, mod(a, b));
                else
                    printf("Cannot calculate modulus with zero!\n \n");
                       printf("- - - - - - - - - - - - - - - - - - - \n \n" );
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

// User-defined functions
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
float divide(int a, int b) {
    return (float)a / b;
}
int mod(int a, int b) {
    return a % b;
}
