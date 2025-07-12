/* print this pattern
A B C D
A B C D
A B C D*/

#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number of rows:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) // outer loop signifies number of lines --->
    {
        int a = 1;
        for (int j = 1; j <= n; j++) // inner loop signifies number of stars in each line --->
        {
            int d = a + 64;
            char ch = (char)d;
            printf("%c ", ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}