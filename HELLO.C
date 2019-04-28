
#include<stdio.h>
#include<conio.h>
int main()

{      long int tp,tm,tw,tl,lm,ilm,lw,ilw;
	clrscr();
	tp=80000;
	tm=0.52*tp;
	tw=tp-tm;
	tl=0.48*tp;
	lm=0.35*tp;
	ilm=tm-lm;
	lw=tl-lm;
	ilw=tw-lw;
	printf("total illeterate man is %ld",ilm);
	printf("total illeterate woman is %ld",ilw);
	getch();
	return 0;
}
