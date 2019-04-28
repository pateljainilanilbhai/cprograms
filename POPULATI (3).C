#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	long int tw,tp,tm,tl,lm,ilm,lw,ilw;
					clrscr();
	printf("hello");
	tp=80000;

	tm=(0.52)*tp;
	tw=tp-tm;
	tl=(0.48)*tp;
	lm=(0.35)*tp;
	ilm=tm-lm;
	lw=tl-lm;
	ilw=tw-lw;
	printf("the total man illliterate is %ld and total woman illiterare is %ld",ilm,ilw);
	getch();return 0;
	}

