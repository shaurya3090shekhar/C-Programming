#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i=i+3)
    {
        printf("Hello Shaurya \n");
    }
    return 0;
}