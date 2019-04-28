#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *f1; int i=0;char jp;
    printf("enter content of file abcd...z \n");

fflush(stdin);

    f1=fopen("hero.txt","r");
    if(ferror(f1))
        {
            printf("error in reading file1\n");
        }
    printf("reverse order is \n");
    fseek(f1,-1L,2);
    jp='a';
    fseek(f1,-1L,2);
    do
    {
        jp=getc(f1);
        printf("%c",jp);
        fseek(f1,-2L,1);
        i++;
    }
    while(i<26);
    getch();
    }
