#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    if(num %5 == 0 || num %3 == 0){
        if(num%15!=0){
        printf("The %d is divisible by 5 or 3 but not by 15",num);
    }
    else{
        printf("The %d is divible by either 5 or 3 and also by 15",num);
    }
    }
    else{
        printf("%d is not divisible by either 5 0r 3",num);
    }

    return 0;
}