#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *f1, *f2;
    char ch,filename[15];
    open_file:
        printf("enter file name:");

        gets(filename);
        if((f1=fopen(filename,"r"))==NULL)
        {
            printf("cannot open the file\n");
            printf("type file name again \n");
            goto open_file;
        }

        f2=fopen("file2.txt","w");
        if(ferror(f2))
        {
            printf("error in reading file1\n");
        }

        ch=getc(f2);

   while(ch=getc(f1))
   {
       if(feof(f1))
       {
           printf("\n End of file\n");
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
}
