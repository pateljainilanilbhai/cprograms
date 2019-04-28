#include<stdio.h>
#include<conio.h>
int main()
{

char m;        char g;        int a;         clrscr();
printf("enter your marital status : y for married and n for unmarried:\n");
scanf("%c",&m);
getch();
printf("enter your gender:  m for male and f for female: \n");
scanf("%c",&g);
getch();
printf("enter your age correctly: \n");
scanf("%d",&a);
getch();
if (m=='y')
{
printf("you are allowed to for insurance");
}
if (m=='n')
	{if (g=='m')
		{if (a>30)
			{printf("you are allowed for insurance");
			}
		if (a<=30)
			{printf("you are not allowed for insurance");
			}
		}
	if (g=='f')
		{if (a>25)
			{printf("you are allowed for insurance");
			}
		if (a<=25)
			{printf("you are not allowed for insurance");
			}
		}
	}
	getch();
	return 0;
	}
