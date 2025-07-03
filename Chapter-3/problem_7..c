// WAP to swap 2 numbers,without using the "third variable"
#include <stdio.h>

int main()
{
    int a;

    printf("Enter A:");
    scanf("%d", &a);

    int b;
    printf("Enter B:");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping A is:%d \n", a);
    printf("Ater swapping B is:%d \n", b);

    return 0;
}