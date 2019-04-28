#include<stdio.h>
#include<conio.h>

void main(int argc, char *argv[])
{
 FILE *f,*f1,*f2;
 int i;
 int a[20],b[20],c[20];
 clrscr();
 printf("\Main function takes %d no. of arguments.",argc);
 f1=fopen("data1.txt","r");
 f2=fopen("data2.txt","r");
 f=fopen(argv[1],"w");
 printf("Contents of file Data1 are:\n");
 for(i=0;i<10;i++)
 {
  fscanf(f1,"%d",&a[i]);
  printf("%d\t",a[i]);
 }
 printf("Contents of file Data2 are:\n");
 for(i=0;i<10;i++)
 {
  fscanf(f2,"%d",&b[i]);
  printf("%d\t",b[i]);
 }

 for(i=0;i<10;i++)
 {
  fprintf(f,"%d\t",a[i]);
  fprintf(f,"%d\t",b[i]);
 }
 fclose(f1);
 fclose(f2);
 fclose(f);
 f=fopen(argv[1],"r");
 printf("Merged list in file %s are:\n","data3.txt");
 for(i=0;i<20;i++)
 {
 fscanf(f,"%d",&c[i]);
 printf("%d\t",c[i]);
 }
 fcloseall();
 getch();
}
