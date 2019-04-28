#include<math.h>

#include<stdio.h>
int main()
{
 int a,b,c,i,r;
 float x1,x2,d,e;
 printf("\n entre the values of a,b,c in the quadratic equation :");
 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 d=(sqrt(pow(b,2)-(4*a*c)));
 e=(pow(b,2)-(4*a*c));
 printf("the value of e is: %f",e);
 if( e>0 )
  {
   printf("\n The roots of the equation are:");
   x1= (-b+d)/(2*a) ;
   x2= (-b-d)/(2*a) ;
   printf("%f",x1);
   printf("%f ",x2);
  }
 else if(e==0)
 {
  printf("\n the roots are equal :");
  x1= (-b-d)/(2*a) ;
  printf("%f",x1) ;
 }
 else
  {
   printf("\n the roots are undifined !!!");
   r=-b/2*a; i=d
   printf("%f",r);/2*a;
   printf("\n the real part is=%d",r);
   printf("\n the imaginary part is=%d",i);
   printf("\n the roots are:%d",r);
   printf("+%d",i);
   printf("i and");
   printf("%d",r);
   printf("-%d",i);
   printf("i");
  }
 return 0;
 }

