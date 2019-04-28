#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,e,f,h,x1,x2;
    printf("\nenter the value of a:");
    scanf("%f",&a);
    printf("\nenter the value of b:");
    scanf("%f",&b);
    printf("\nenter the value of c:");
    scanf("%f",&c);
    //e=pow(b*b);
    //printf("\n value is e: %f",e);
    f=pow(b*b)-(4*a*c);
    printf("\n value is f: %f",f);
    //h=sqrt(e,f);
    //printf("\n value of h: %f",h);
    x1=(-b+sqrt(e,f))/2*a;
    printf("\n value of x1: %f",x1);
  //  x2=(-b-h)/2*a;
  //  printf("\n value of x1: %f",x2);
    return 0;

}
