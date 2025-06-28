#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num > 99 && num < 1000){
        printf("Entered number is a three digit number");
    }
    else{
        printf("Entered number is not a three digit number");
    }
    return 0;
}
