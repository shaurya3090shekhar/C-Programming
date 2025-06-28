#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    if(num%3==0 && num%5==0){
        printf("%d is divisible by both 5 and 3",num);
    }
    else{
        printf("%d is not divisible by 5 and 3",num);
    }

    return 0;
}
