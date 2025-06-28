#include<stdio.h>
int main()
{
    int num;

    printf("Enter the number:");
    scanf("%d",&num);
    
    if (num<0){
        num = num * (-1);
    }
    printf("The absolute value is:%d",num);
   
    return 0;
}