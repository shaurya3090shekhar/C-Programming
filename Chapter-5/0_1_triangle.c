#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 1)
            {
                printf("1 ");
                break;
            }
            else
            {
                printf("%d ", j % 2);
            }
        }
        printf("\n");
    }

    return 0;
}
