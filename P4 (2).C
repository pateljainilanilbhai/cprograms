#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, x;
    clrscr();
    printf("enter two values");
    scanf(" %d %d", &a ,&b);
    x=a+b;
    printf("After swapping \n");
    printf("a=%d and b=%d", x-a, x-b);
    getch();
}