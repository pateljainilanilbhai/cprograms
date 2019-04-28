#include<stdio.h>
#include<conio.h>

void main()
{
 FILE *fp1,*fp2;
 int i;
 char c;
 clrscr();
 fp1=fopen("abc.txt","w+");
 for(i=65;i<=90;i++)
 {
  fprintf(fp1,"%c",i);
 }
 fp2=fopen("cba.txt","w");
 fseek(fp1,-1,2);
 for(i=1;i<=26;i++)
 {
  fseek(fp1,-i,2);
  c=getc(fp1);
  fprintf(fp2,"%c",c);
  printf("%c",c);
 }
 fclose(fp1);
 fclose(fp2);
 getch();
}
