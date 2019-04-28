#include<stdio.h>
#include<conio.h>
int main()
{ int a,hundrednotes,fiftynotes,tennotes,onenotes;
clrscr();
printf("please enter amount in hundreds only till 999 only \n");
scanf("%d",&a);
hundrednotes=a/100;
printf("the number of hundred notes is %d \n",hundrednotes);
a=a%100;
fiftynotes=a/50;
printf("the number of fifty notes is %d \n",fiftynotes);
a=a%50;
tennotes=a/10;
printf("the number of ten notes is %d \n",tennotes);
a=a%10;
onenotes=a;
printf("the one rupee coins to be given is %d \n",a);
getch();
return 0;
}