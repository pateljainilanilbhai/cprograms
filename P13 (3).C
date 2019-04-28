#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int s;
    float da,hra,ma,ta,it=500,nts,pf;

    clrscr();

    printf("Enter Your salary:");
    scanf("%d",&s);
    da=(0.7)*s;
    hra=(0.07)*s;
    ma=(0.02)*s;
    ta=(0.04)*s;
    pf=(0.12)*s;
    printf("\n ALLOWANCES");
    printf("\n\t DA is %f",da);
    printf("\n\t HRA is %f",hra);
    printf("\n\t MA is %f",ma);
    printf("\n\t TA is %f",ta);

    printf("\n DEDUCTION");
    printf("\n\t PF is %f",pf);
    printf("\n\t It is %f",it);
    nts=s+da+hra+ma+ta-pf-it;
    printf("\n -------------------------------------------------");
    printf("\n\t Net salary is %f",nts);
    getch();
}


