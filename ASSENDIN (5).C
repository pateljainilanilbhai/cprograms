#include<stdio.h>
#include<conio.h>
int main()
{long int a,c,d;
      long int b;

printf("enter the last no::::::::::::::::::::::::");
scanf("%ld",&a);
printf("a = %ld \n",a);
a=a+1;
for (b=1;b<a;b++)
{printf("%ld \n",b);}
getch();
return 0;
}