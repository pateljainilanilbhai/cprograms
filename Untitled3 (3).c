#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0;
    h:
        i=i+1;
        printf("%d \n",i);
        goto h;
        getch();
}
