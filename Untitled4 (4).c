#include<stdio.h>
#include<conio.h>
int main()
{
    int k; long double a[32767],b[32767],c[32767],d[32767],e[32767];
    for (k=0;k<32737;k++)
    {
        b[k]=5;
         c[k]=50;
          d[k]=500;
           e[k]=5000;


        a[k]=(k*b[k]*c[k]*d[k]*e[k]);
        printf("%lf \n",a[k]);

    }
return a;}
