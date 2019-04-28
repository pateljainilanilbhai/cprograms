#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
	float aa,bb,cc,dd,ee,ff,gg,hh,ii,jj,kk;
	printf("this is program to find perfect answer of three variable equation \n");
	printf("the equation will look like:");
	printf("\n ax+by+cz=d  \n ex+fy+gz=h   \n ix+jy+kz=l");
	printf("\n enter the value of a:");
	scanf("%f",&a);
	printf("\n enter the value of b:");
	scanf("%f",&b);
	printf("\n enter the value of c:");
	scanf("%f",&c);
	printf("\n enter the value of d:");
	scanf("%f",&d);
	printf("\n enter the value of e:");
	scanf("%f",&e);
	printf("\n enter the value of f:");
	scanf("%f",&f);
	printf("\n enter the value of g:");
	scanf("%f",&g);
	printf("\n enter the value of h:");
	scanf("%f",&h);
	printf("\n enter the value of i:");
	scanf("%f",&i);
	printf("\n enter the value of j:");
	scanf("%f",&j);
	printf("\n enter the value of k:");
	scanf("%f",&k);
	printf("\n enter the value of l:");
	scanf("%f",&l);
	dd=(a*((f*l)-(h*j)))-(b*((e*l)-(h*i)))+(d*((e*j)-(i*f)));
	aa=(a*((k*f)-(g*j)))-(b*((e*k)-(g*i)))+(c*((e*j)-(i*f)));
	bb=(d*((f*k)-(g*j)))-(b*((h*k)-(l*g)))+(c*((h*j)-(l*f)));
	cc=(a*((h*k)-(l*g)))-(d*((e*k)-(i*g)))+(c*((e*l)-(i*h)));
	ee=bb/aa;
	ff=cc/aa;
	gg=dd/aa;
	printf("your equation is \n %f x + %f y + %f z = %f  \n %f x + %f y + %f z = %f  \n %f x + %f y + %f z = %f \n",a,b,c,d,e,f,g,h,i,j,k,l);
	printf("delta= %f \n  delta1= %f \n  delta2= %f \n  delta3=%f \n",aa,bb,cc,dd);
	printf("the valueb of x is %f \n the value of y is %f \n the value of z is %f",ee,ff,gg);
	printf("\n please give only valid equation which have only one solution if you give more than one solution equation then it will generate error of infinite solutions");

	getch();

	}