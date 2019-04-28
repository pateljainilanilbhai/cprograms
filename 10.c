#include<stdio.h>
#include<conio.h>

void main()
{
 int *p;
 float *avg;
 int i,n;
 clrscr();
 printf("Enter size of array:");
 scanf("%d",&n);
 p=(int *)calloc(n,sizeof(int));
 avg=(float *)malloc(sizeof(float));
 *avg=0;
 for(i=0;i<n;i++)
 {
 printf("\nEnter the number:");
 scanf("%d",p);
 *avg=*avg+*p;
 p++;
 }
 *avg=*avg/n;
 printf("\nAverage=%f",*avg);
 free(p);
 free(avg);
 getch();
}
