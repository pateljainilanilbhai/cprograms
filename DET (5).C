#include<stdio.h>
#include<conio.h>
int main()
{
	int nn,cc,kk, space = 1;      int iii,jjj,aaa;
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;  int det;
	clrscr();
	printf("this is program to solve 4 x 4 determinant \n");
	printf("your determinant will look like:\n");
	printf(" | a b c d| \n | e f g h| \n | i j k l| \n | m n o p| \n");
	printf("please enter the value of a:::::::");
	scanf("%d",&a);
	printf("please enter the value of b:::::::");
	scanf("%d",&b);
	printf("please enter the value of c:::::::");
	scanf("%d",&c);
	printf("please enter the value of d:::::::");
	scanf("%d",&d);
	printf("please enter the value of e:::::::");
	scanf("%d",&e);
	printf("please enter the value of f:::::::");
	scanf("%d",&f);
	printf("please enter the value of g:::::::");
	scanf("%d",&g);
	printf("please enter the value of h:::::::");
	scanf("%d",&h);
	printf("please enter the value of i:::::::");
	scanf("%d",&i);
	printf("please enter the value of j:::::::");
	scanf("%d",&j);
	printf("please enter the value of k:::::::");
	scanf("%d",&k);
	printf("please enter the value of l:::::::");
	scanf("%d",&l);
	printf("please enter the value of m:::::::");
	scanf("%d",&m);
	printf("please enter the value of n:::::::");
	scanf("%d",&n);
	printf("please enter the value of o:::::::");
	scanf("%d",&o);
	printf("please enter the value of p:::::::");
	scanf("%d",&p);
	printf(" | %d %d %d %d | \n | %d %d %d %d | \n | %d %d %d %d | \n | %d %d %d %d | \n",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);
	det=(a*((f*((k*p)-(o*l)))-(g*((j*p)-(n*l)))+(h*((j*o)-(n*k)))))-(b*((e*((k*p)-(o*l)))-(g*((i*p)-(l*m)))+(h*((i*o)-(m*k)))))+(c*((e*((j*p)-(n*l)))-(f*((i*p)-(m*l)))+(h*((i*n)-(j*m)))))-(d*((e*((j*o)-(k*n)))-(f*((i*o)-(k*m)))+(g*((i*n)-(j*m)))));
	printf("%d",det);           getch();




    clrscr();

    printf("Enter number of rows\n");
    scanf("%d", &nn);

    space = nn - 1;

    for (kk = 1; kk <= nn; kk++)
    {
	for (cc = 1; cc <= space; cc++)
	    printf(" ");

	space--;

	for (cc = 1; cc <= 2*kk-1; cc++)
	    printf("*");

	printf("\n");
    }

    space = 1;

    for (kk = 1; kk <= nn - 1; kk++)
    {
	for (cc = 1; cc <= space; cc++)
	    printf(" ");

	space++;

	for (cc = 1 ; cc <= 2*(nn-kk)-1; cc++)
	    printf("*");

	printf("\n");
    }
	getch();
	getch();


	clrscr();
	printf("good morning \n");

	printf("how many rows you want?");
	scanf("%d",&aaa);
	aaa=aaa+2;
	for(iii=1;iii<aaa;iii++)
	{printf("\n"); getch();

	for(jjj=1;jjj<iii;jjj++)
	{printf("*");getch();
	}
	}



	getch();
	return 0;
	}