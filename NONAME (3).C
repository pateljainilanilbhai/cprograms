#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{       int a; long int z; int b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;     z=0;
	clrscr();
	printf("kanan hotel billing system;\n");
	for (a=a;a<10;a=a)
	{
	printf("dosa :1 \n pizza :2 \n butter nan :3 \n  punjabi :4 \n kathyavadi dish:5 \n sandwich:6 \n buiscuit:7 \n puff:8 \n roti:9 \n end of bill:10 \n");
	scanf("%d",&a);

	if (a==1)
	{printf(" \n dhosa rs 40 \n"); b=40; z=z+b;  }
	if (a==2)
	{printf(" \n pizza rs 100 \n"); b=100; z=z+b; }
	if (a==3)
	{printf(" \n butter nan rs 30 \n"); b=30; z=z+b; }
	if (a==4)
	{printf(" \n punjabi rs 80 \n"); b=80; z=z+b; }
	if (a==5)
	{printf(" \n kathyawadi rs 120 \n"); b=120; z=z+b; }
	if (a==6)
	{printf(" \n sandwich rs 35 \n"); b=35; z=z+b;}
	if (a==7)
	{printf(" \n biscuit rs 20 \n"); b=20; z=z+b;}
	if (a==8)
	{printf(" \n puff rs 10 \n"); b=10; z=z+b;}
	if (a==9)
	{printf(" \n roti rs 15 \n"); b=15; z=z+b;}
	}
		printf("your bill is %d",z);




	getch();
	return 0;
	}