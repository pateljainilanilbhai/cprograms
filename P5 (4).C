#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    clrscr();
    printf("enter two values");
    scanf("%d %d",&a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping \n") ;
    printf("a=%d and b=%d",a ,b);
    getch();
}

