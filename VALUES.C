#include<conio.h>
#include<stdio.h>

void main()

{
	int x;
	clrscr();


	printf("\n\tThe size of int is %d bytes",sizeof(int));
	printf("\n\tThe size of char is %d bytes",sizeof(char));
	printf("\n\tThe size of signed char is %d bytes",sizeof(signed char));
	printf("\n\tThe size of unsigned char is %d bytes",sizeof(unsigned char));
	printf("\n\tThe size of signed int  is %d bytes",sizeof(signed int));
	printf("\n\tThe size of unsigned int is %d bytes",sizeof(unsigned int));
	printf("\n\tThe size of short int is %d bytes",sizeof(short int));
	printf("\n\tThe size of signed short int is %d bytes",sizeof(signed short int));
	printf("\n\tThe size of unsigned short int is %d bytes",sizeof(unsigned short int));
	printf("\n\tThe size of long int is %d bytes",sizeof(long int));
	printf("\n\tThe size of signed long int is %d bytes",sizeof(signed long int));
	printf("\n\tThe size of unsigned long int is %d bytes",sizeof(unsigned long int));
	printf("\n\tThe size of float is %d bytes",sizeof(float));
	printf("\n\tThe size of double is %d bytes",sizeof(double));
	printf("\n\tThe size of long double is %d bytes",sizeof(long double));
	getch();
}
