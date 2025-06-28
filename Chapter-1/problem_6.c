#include <stdio.h>

int main()
{
    int l;
    int b;
    int area;
    int perimeter;

    printf("Enter the length: ");
    scanf("%d", &l);
    
    printf("Enter the breadth: ");
    scanf("%d", &b);

    area= l*b;
    perimeter= 2*(l+b);


    if (area>perimeter) {
        printf("Area is greater than its perimeter");
    }
    else if (perimeter>area) {
        printf("perimeter is greater than its area");
    }
    else {
        printf("Area is Equal to perimeter");
    }

    return 0;
}
