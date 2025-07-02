// Take two integers input, a and b : a>b, and find the remainder when a is divided by b.
#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the number a and b:");
    scanf("%d %d", &a, &b);
    int remainder;
    remainder = a % b;
    printf("The remainder of a/b is: %d",remainder);

    return 0;

}