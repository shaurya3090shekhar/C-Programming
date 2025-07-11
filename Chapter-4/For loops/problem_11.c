// WAP to check if a number is prime or composite
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("The given number is neither prime nor composite.\n");
        return 0;
    }

    int a = 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }

    if (a == 0)
    {
        printf("The given number is prime.\n");
    }
    else
    {
        printf("The given number is composite.\n");
    }
    return 0;
}
