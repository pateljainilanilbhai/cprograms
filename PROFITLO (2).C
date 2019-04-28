#include<stdio.h>
#include<conio.h>
int main()
{
long int cp,sp,loss,profit;  float per;   clrscr();
printf("\n enter the cost price");
scanf("%ld",&cp);
printf("\n enter the selling price:");
scanf("%ld",&sp);
loss=cp-sp ;
profit=sp-cp;
per=((sp-cp)/(float)cp)*100.0;
if(sp>=cp)
{printf("there is a profit of %ld rupees and profit pecentage is %f",sp>=cp?profit:loss,sp>cp?per:-per);  }
if(sp<cp)
{printf("there is a loss of %ld rupees snd loss per is %f",sp>=cp?profit:loss,sp>cp?per:-per); }
getch();
return 0;
}
