#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter the 1st number:");
    scanf("%d",&a);
    printf("Enter the 2nd number:");
    scanf("%d",&b);
    printf("Enter the 3rd number:");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("%d is greatest number",a);
    }
    else if(b>a && b>c){
        printf("%d is greatest",b);
    }
    else{
        printf("%d is greatest",c);
    }
    return 0;
}