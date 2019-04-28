#include<stdio.h>
#include<conio.h>
int main()
{
int d,rs;
float c,a;
printf("enter amount");
scanf("%f",&a);
rs=a;

c=a-rs;
d=c*100;
printf("rupees= %d",rs);
printf("\n paisa= %d",d);
return 0;
}
