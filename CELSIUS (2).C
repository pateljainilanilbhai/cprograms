#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{


int a; float c,f;

clrscr();

printf("enter the value of celsius: \n");
scanf("%f",&c);
f=((9.0/5.0)*c)+32;
printf("farenheit is %f \n",f);



printf("enter the value of farenheit: \n") ;
scanf("%f",&f);
c=(f-32)*(5.0/9.0);
printf("celsius is %f \n",c);

getch();
return 0;
}