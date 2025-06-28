#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    
    if(num%5==0){
        if(num%3==0){
            printf("%d is divisible by both 5 and 3",num);
        }
        else{
        printf("%d is not divisible by both 5 and 3",num);
    }
    }
    else{
        printf("%d is not divisible by either 5 and 3",num);
    }
return 0;
}
