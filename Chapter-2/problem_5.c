//WAP to calculate the Simple Intrest by taking input from user.
#include <stdio.h>

int main() {
    float p;
    float r;
    float t;
    float SI;

    // Get user input
    printf("Enter the principal amount: ");
    scanf("%f", &p);

    printf("Enter the rate of interest: ");
    scanf("%f", &r);

    printf("Enter the time: ");
    scanf("%f", &t);

    // Calculate simple interest
    SI = (p * r * t) / 100;

    // Output the result
    printf("The simple interest is: %f\n", SI);

    return 0;
}
