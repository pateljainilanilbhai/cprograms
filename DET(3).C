#include<stdio.>
#include<conio.h>
#include<math.h>

void main()
{
	int a,b,c;
	float r1,r2,det;

	clrscr();

	printf("\n\tEnter value of a : ");
	scanf("%d",&a);
	printf("\n\tEnter value of b : ");
	scanf("%d",&b);
	printf("\n\tEnter value of c : ");
	scanf("%d",&c);
	det = (float)(pow(b,2)-(4*a*c));
	printf("\n\tValue of determinant is %f ",det);
	r1=(-b+sqrt(det))/(2*a);
	r2=(-b-sqrt(det))/(2*a);
	printf("\n\tRoots of equation are %f and %f",r1,r2);
	getch();
}