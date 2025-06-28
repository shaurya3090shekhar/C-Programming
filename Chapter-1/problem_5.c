#include <stdio.h>

int main()
{
    int cp;
    int sp;
    printf("Enter the cost price: ");
    scanf("%d", &cp);
    
    printf("Enter the selling price: ");
    scanf("%d", &sp);

    if (sp > cp) {
        printf("Profit is: %d\n", sp - cp);
    }
    else if (cp > sp) {
        printf("Loss is: %d\n", cp - sp);
    }
    else {
        printf("No profit, No loss\n");
    }

    return 0;
}
