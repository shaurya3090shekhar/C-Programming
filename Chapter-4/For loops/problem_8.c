// Display this AP 4,7,10,13,16 upto "n" terms
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    int i;
    for (i = 4; i <= (3 * n) - 1; i = i + 3)
    {
        printf("%d \n", i);
    }
    return 0;
}