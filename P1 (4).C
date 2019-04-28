#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,add,m,s,d,mo;
clrscr();
printf("Enter the value of A=");
scanf("%d",&a);
printf("Enter the value of B=");
scanf("%d",&b);
add=a+b;
m=a*b;
s=a-b;
d=a/b;
mo=a%b;
printf("%d %d\n",a,b);
printf("Addition is %d\n",add);
printf("Multiply is %d\n",m);
printf("Subtract is %d\n",s);
printf("Divison is %d\n",d);
printf("Modules is %d\n",mo);
getch();
}