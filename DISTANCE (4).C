#include<stdio.h>
#include<conio.h>
void main()
{
    long int km, m, cm;
    double fe, in;
    clrscr();
    printf("Enter distance betwwen two cities In kilometres:");
    scanf("%ld",&km);
    m=1000*km;
    cm=100*m;
    fe=km*3280.84;
    in=39370.1*km;
    printf("\nDistance in metre is %ld",m);
    printf("\nDistance in centimetre is %ld",cm);
    printf("\nDistance in feet is %lf",fe);
    printf("\nDistance in inches is %lf",in);


    getch();
}


