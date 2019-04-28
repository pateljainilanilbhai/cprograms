#include<stdio.h>
#include<conio.h>
int main()
{
	long int bs;
	int it;
	float da,hra,ma,ta,pf,ns;
	clrscr();
	printf("enter the basic salary");
	scanf("%ld",&bs);
	printf("allowances \n");
	da=0.7*bs;
	printf("da is equal to %f \n",da);
	hra=0.07*bs;
	printf("hra is equal to %f \n",hra);
	ma=0.02*bs;
	printf("ma is equal to %f \n",ma);
	ta=0.04*bs;
	printf("ta is equal to %f \n",ta);
	printf("deductions");
	pf=0.12*bs;
	printf("pf is equal to %f \n",pf);
	it=1000;
	printf("it is equal to %d \n",it);
	ns=(bs)=(da+hra+ma+ta)-(pf+it);
	printf("net salary is equal to %f \n",ns);
	getch();
	return 0;
}
