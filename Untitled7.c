#include<stdio.h>
#include<conio.h>
int main()
{
    int i; i=1;

    printf("   ");
    for(i=1;i<=10;i++)
    {
        printf(" %d",i);

        if(i==1||i==3||i==6||i==10)
        {
            printf("\n");
            if(i==1)
            {
                printf("  ");
            }
            if(i==3)
            {
                printf(" ");
            }
        }
    }
    getch();

}
