#include<stdio.h>
#include<conio.h>
#define area(r) (3.14*r*r)
int main()
{
float r1,r2,r3,ar1,ar2,ar3;
printf("input r1:");
scanf("%f",&r1);
ar1=area(r1);
printf("area of circle 1:%f",ar1);
printf("\n input r2:");
scanf("%f",&r2);
ar2=area(r2);
printf("\n area of circle 2:%f",ar2);
printf("\n input r3:");
scanf("%f",&r3);
ar3=area(r3);
printf("\n area of circle 3:%f",ar3);
return 0;
}
