#include<stdio.h>
int main()
{
    int x;
    x=500;
    printf("%d",x);
    
    //updation of variables
    //1.
    printf("\n");

    x=700;
    printf("%d",x);

    //2.
    x=x+100;
    printf("\n");
    printf("%d",x);

    //3.
    printf("\n");
    x=x-100;
    printf("%d",x);

    return 0;
}