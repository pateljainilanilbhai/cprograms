#include<stdio.h>
#include<conio.h>
main()
{
float a,i,f,m;
printf("Enter the distance in cm=");
scanf("%f",&a);
i=a/2.54;
printf("Distance in inch=%f\n",i);
f=a/12/2.54;
printf("Distance in Feet=%f\n",f);
m=a/100;
printf("Distance in Meters=%f\n",m);
}
