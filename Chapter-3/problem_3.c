#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);

    int root = sqrt(a);
    printf("Square rooot is %d", root);
    return 0;
}