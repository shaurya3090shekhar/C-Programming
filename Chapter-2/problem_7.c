// Take float as input and print the fractional part of the real numbers.
#include<stdio.h>
int main()
{
    float x;
    printf("Enter your decimal number:");
    scanf("%f",&x);
    
    int y = x;
    printf("Integer part of the number is %d \n",y);

    float z = x - y;
    printf("Fractinal part of %f is: %f",x,z);

    return 0;

}