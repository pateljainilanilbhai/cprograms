#include<stdio.h>
#include<conio.h>
int main()
{
	float fa,ce;



	printf("\n\tEnter your value of celsius :");
	scanf("%f",&ce);
	fflush(stdin);




	fa = ((9.0/5)*(ce)) + (32);


	printf("\n\tvalue in farenheit is %f ",fa);


	getch();
	return 0;
}
