#include<stdio.h>
#include<conio.h>
void main()
{

int a,b,sum,prod,sub;
int x,y,z;
float c,div;
char d;
clrscr();
a=5;
b=2;
/*c=2.5;
d='v';*/
sum=a+b;
sub=a-b;
prod=a*b;
div=a/b;
printf("sum=%d",sum);
printf("\nsub=%d",sub);
printf("\nprod=%d",prod);
printf("\ndiv=%f",div);
printf("\n %d",sizeof(int));
printf("\n %d",sizeof(float));
printf("\n %d",sizeof(char));
/*printf("a=%d",a);
printf("\nb=%d",b);
printf("\nc=%f",c);
printf("\nd=%c",d);*/
printf("\n\"Bitty Butter bought some butter,\n\t but she found butter bitter,\n\t\tso she bought another butter,\n\t\t\tto make the bitter butter better\"");
printf("\n\\t \%\%f //This was tongue twister\\n");

printf("\ninsert values");
scanf("\n%d",&x);
scanf("\n%d",&y);
z=x;
x=y;
y=z;

printf("\n x=%d",x);
printf("\n y=%d",y);
getch();
}