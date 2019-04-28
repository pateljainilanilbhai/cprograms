#include<stdio.h>
#include<conio.h>
void main()
{
    long int tm, tw, tl, tml, twl, tmi, twi ,p;
    p=80000;
    clrscr();
    tm=0.52*p;
    tw=p-tm;
    tl=0.48*p;
    tml=0.35*p;
    twl=tl-tml;
    tmi=tm-tml;
    twi=tw-twl;
    printf("Number of illiterate Men is %ld",tmi);
    printf("number of illiterate women is %ld",twi);
    getch();
}