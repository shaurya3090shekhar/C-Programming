#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter the number:");
    scanf("%d",&b);
    printf("Enter the number:");
    scanf("%d",&c);

    if((a+b)>c && (b+c)>a && (a+c)>b){
        printf("valid triangle");
    }
    else{
        printf("Invalid triangle");
    }

}
