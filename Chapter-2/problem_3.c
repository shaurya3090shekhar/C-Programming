//WAP to calculate the percentage of 5 subjects.
#include<stdio.h>
int main()
{
    float sub1 = 90; //maths
    float sub2 = 87; //english
    float sub3 = 76.5; //sst
    float sub4 = 98; //hindi
    float sub5 = 87; //science

    float percentage = (sub1+sub2+sub3+sub4+sub5)/5;
    printf("%f",percentage);

    return 0;
}