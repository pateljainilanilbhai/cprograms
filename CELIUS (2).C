#include<stdio.h>
#include<conio.h>
void main()
{
	float fa,ce;

	clrscr();

	printf("\n\tEnter your value of celsius :");
	scanf("%f",&ce);
	fflush(stdin);




	fa = ((9.0/5)*(ce)) + (32);


	printf("\n\tVAlue in farenheit is %f ",fa);


	getch();
}