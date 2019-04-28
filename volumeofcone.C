#include<stdio.h>
#include<conio.h>
int main()
{
float r,h,area;
float volume;
printf("enter the value of radius=");
scanf("%f",&r);
area=3.14*r*r;
printf("enter the value of height=");
scanf("%f",&h);
volume=(float)1/3*3.14*r*r*h;
printf("area of cricle=%f",area);
printf("volume of cone=%f",volume);
getch();
}
