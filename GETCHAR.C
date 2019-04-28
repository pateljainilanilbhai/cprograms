
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
 char c;

 clrscr();

 printf("\tEnter caracter:");

 c=getchar();

 putchar(c);

 printf("\n\tThe ascii value is %d\n",c);

 printf("\n\tYour character is ");
 if(isalnum(c))
 {
	printf("an Alphanumeric,",c);
	if(isalpha(c))
	{
		printf("an Alphabet ",c);
		if(isupper(c))
		{
			printf("& upper.",c);
		}
		else
		{
		   printf("& lower.");
		}
	}
	else
	{
		printf("& digit.",c);
	}
 }
   else
   {  if(isprint(c))
      {
	      printf("printable,",c);
      }
      else
      {
	      printf("non-printable,",c);
      }
   }
 printf("\n\n\t%c",c);

 getch();

}
