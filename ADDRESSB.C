#include<stdio.h>
#include<conio.h>
int main()
{       char no[30]; char name[300];
	printf("enter 0 in mobile no to end the editing program");
	getch();
	clrscr();
	do
	{

	printf("enter name");
	scanf("%s",&name);
	printf("enter mobile no:");
	scanf("%s",&no);
	clrscr();
	printf("**************************************************************************\n");
	printf("name:%s",name);
	printf("\nnumber:%s \n",no);
	}
	while (no!=0);
	printf("program ends good bye");
	getch();
	clrscr();
	return 0;
	}