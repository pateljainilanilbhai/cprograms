 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 clrscr();   int i,no;
 do
 {printf("\n\nenter any no to fnd its factor");
 scanf("%d",&no);
 if(no==0)
 break;
 printf("\n the factor are");  for(i=1;i<no;i++)
 {
 if(no%i==0)
 {
 printf("%d     ",i);
 }
 }
 }
 while(no>0);
 getch();
 }