#include<stdio.h>
int main()
{
int x=4,y,z;
y=--x;
z=x--;
printf("%d %d %d",x,y,z);

return 0;
}



// x++ ---> x=x+1(use x,then increment)

// ++x ---> x=x+1(increment first,then use x)

// x-- --->x=x-1(use x,then decrement)

// --x --->x=x-1(decrement first,then use x)