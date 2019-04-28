#include<stdio.h>
#include<conio.h>
int main()
{
char m;        int g;        int a;         clrscr();
printf("enter your marital status : m for married and u for unmarried:\n");
scanf("%c",&m);
getch();
printf("enter your gender:  1 for male and 0  for female: \n");
scanf("%c",&g);
getch();
printf("enter your age correctly: \n");
scanf("%d",&a);

if (m=='m')
{
printf("you are allowed to for insurance");
}
if (m=='u')
	{if (g==1)
		{if (a>30)
			{printf("you are allowed for insurance");
			}
		if (a<=30)
			{printf("you are not allowed for insurance");
			}
		}
	if (g==2)
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

