#include <stdio.h>

int main() {
    int principal = 10000; 
    int rate = 5;          
    int time = 12;
    int simple_interest;

    simple_interest = (principal * rate * time) / 100;

    printf("Interest for principal := %d \n at rate %d%% \n %d months is: %d\n",
           principal, rate, time, simple_interest);

    return 0;
}
