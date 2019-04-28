#include<stdio.h>
#include<conio.h>
int main()
{
float amount;
int rs,paisa;
printf("enter the amount:");
scanf("%f",&amount);
rs=amount;
paisa=(amount-rs)*100;
printf("\n%d  rupee",rs);
printf("\n%d  paisa",paisa);
getch();
return 0;
}


