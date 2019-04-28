#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   int a, b, c;
   float r1, r2, det;
   clrscr();
   printf("Enter value of a , b, c");
   scanf("%d%d%d",&a,&b,&c);
   det=(float)((pow(b,2))-(4*a*c));
   printf("Value of determinant is %f",det);
   r1=(-b+sqrt(det))/(2*a);
   r2=(-b-sqrt(det))/(2*a);
   printf("roots of equation are %f and %f", r1, r2);
   getch();
}
