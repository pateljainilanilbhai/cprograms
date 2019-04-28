#include<stdio.h>


void main()
{
 FILE *f1,*f2;
 char ch;
 char filename[15];
 open_file:
 printf("Enter filename:");
 gets(filename);
 if((f1=fopen(filename,"r"))==NULL)
 {
  printf("Cannot open file\n");
  printf("Type filename again\n");
  goto open_file;
 }
  f2=fopen("file2.txt","w");
  ch=getc(f2);
  if(ferror(f2))
  {
   printf("Error in reading from file\n");
  }
  while(ch=getc(f1))
  {
   if(feof(f1))
   {
    printf("\nEnd of file\n");
    break;
   }
   else
   {
    putc(ch,f2);
    printf("%c",ch);
   }
  }
  fclose(f1);
  fclose(f2);
 getch();
}
