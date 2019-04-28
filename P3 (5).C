#include<stdio.h>
#include<conio.h>
void main()
{
    int x, y, z;
    clrscr();
    printf("Enter the values of x & y \n");
    scanf("%d %d",&x, &y);
    z=x+y;
    printf("The value of addition of %d and %d is %d",x,y,z);
    getch();
}