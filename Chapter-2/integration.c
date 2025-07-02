#include <stdio.h>

int main()
{
    float a, b; // Lower and upper limits
    int n;      // Number of intervals

    printf("Enter lower limit (a): ");
    scanf("%f", &a);
    printf("Enter upper limit (b): ");
    scanf("%f", &b);
    printf("Enter number of intervals (n): ");
    scanf("%d", &n);

    float h = (b - a) / n;  // Step size
    float sum = 0.0;

    // Calculate the sum using the Trapezoidal Rule directly
    for (int i = 0; i <= n; i++)
    {
        float x = a + i * h;
        float fx = x * x; // f(x) = x^2

        if (i == 0 || i == n)
            sum += fx / 2;  // First and last terms are halved
        else
            sum += fx;
    }

    float result = h * sum;
    printf("The approximate value of the integral is: %.4f\n", result);

    return 0;
}
