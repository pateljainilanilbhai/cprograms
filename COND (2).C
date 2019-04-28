#include<stdio.h>
#include<conio.h>
int main()
{
float a,b,c;
printf("enter a:");
scanf("%f",&a);
printf("enter b: \n ");
scanf("%f",&b);
printf("enter c: \n ");
scanf("%f",&c);
printf("%f",a>b?(a>c?a:c):(b>c?b:c));
getch();
return 0;
}