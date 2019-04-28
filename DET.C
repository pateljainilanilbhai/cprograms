#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float r1,r2,det;
	printf("\n\tEnter value of a,b,c : ");
	scanf("%d%d%d",&a,&b,&c);
	det = (float)(b*b)-(4*a*c);
	printf("\n\tValue of determinant is %f ",det);
	r1=(-b+sqrt(det))/(2*a);
	r2=(-b-sqrt(det))/(2*a);
	printf("\n\tRoots of equation are %f and %f",r1,r2);
	getch();
	return 0;
}
