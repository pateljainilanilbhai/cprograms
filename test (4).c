#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a =*b;
    *b =temp;

}

void main()
{
int a[2]={1,2};

 swap(&(a[0]),&(a[1]));

 printf("%d %d",a[0],a[1]);

}
