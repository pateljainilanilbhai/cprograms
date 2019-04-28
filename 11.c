#include<stdio.h>
#include<conio.h>

void main()
{
 char *a;
 clrscr();
 a=(char *)calloc(10,sizeof(char));
 printf("\nEnter a string:");
 gets(a);
 a=(char *)realloc(a,20*sizeof(char));
 printf("\nstring after reallocation of memory in array:");
 puts(a);
 free(a);
 getch();
}
