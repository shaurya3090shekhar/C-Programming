#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (int k = 1; k <= n - i; k++)
        {
            printf("  "); // two spaces for better alignment
        }
        // Print numbers from 1 to (2*i - 1)
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
