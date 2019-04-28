#include<stdio.h>
#include<conio.h>
int main()
{
	int hn,fn,tn,a;
	clrscr();
	printf("PLEASE ENTER THE AMOUNT IN HUNDREDS ONLY");
	scanf("%d",&a);
	hn=a/100;
	printf("THE NUMBER OF HUNDRED NOTE IS %d",hn);
	a=a%100;
	fn=a/50;
	printf("THE NUMBER OF FIFTY NOTE IS %d",fn);
	a=a%50;
	tn=a/10;
	printf("THE NUMBER OF TEN NOTE IS %d",tn);
	tn=a%10;
	getch();
	return 0;
}