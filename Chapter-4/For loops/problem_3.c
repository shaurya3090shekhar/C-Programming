//print all the even numbers from 1 to 100 using loops.
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}