#include <stdio.h>
void England()
{
    printf("you are in england \n");
    return;
}
void Australia()
{
    printf("you are in Australia \n");
    England(); //Calling England
    return;
}
void India()
{
    printf("you are in India \n");
    Australia(); //Calling Australia
    return;
}
int main()
{
    India(); //Calling India
    return 0;
}
