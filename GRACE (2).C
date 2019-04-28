#include<stdio.h>
#include<conio.h>
int main()
{

int clas; int fail;
printf("enter your grade class:1,2or3??");
scanf("%d",&clas);
printf("\n enter the subjects you are failing to get grace marks");
scanf("%d",&fail);
switch (clas)
{case 1:
{ if (fail<=3)
	{printf("congrats you get 5 grace marks per subject");}
 else if (fail>3)
 {printf("sorry");}    }
case 2:
{ if (fail<=2)
	{printf("congrats you get 4 grace marks per subject");}
	    else if (fail>2)
 {printf("sorry");}     }
 case 3:
 { if (fail<=1)
		{printf("congrats you get 5 grace marks per subject");}
	    else if (fail>1)
 {printf("sorry");}     }      }

getch();
return 0;
}