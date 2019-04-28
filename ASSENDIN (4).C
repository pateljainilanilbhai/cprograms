#include<stdio.h>
#include<conio.h>
int main()
{int a,c,d;
      long int b;

printf("enter the last no::::::::::::::::::::::::");
scanf("%d",&a);
printf("a = %d \n",a);
a=a+1;
for (b=1;b<a;b++)
{printf("%d \n",b);}
getch();
return 0;
}