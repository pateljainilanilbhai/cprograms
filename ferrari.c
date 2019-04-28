#include<stdio.h>
#include<conio.h>
#include<math.h>
void cardon(float a,float b,float c,float d);
float cuberoot(int);
int main()
{

    FILE *fp,*fp2; char ch,ch2;
    fp=fopen("hello.txt","a");
    fseek(fp,0L,2);
    fp2=fopen("hello.txt","r");
    while(ch=getc(fp2))
    {
        putc(ch,fp);
        printf("%c",ch);
        ch2=getc(fp);
        printf("%c",ch);
        fseek(fp,-1l,1);
    }
    float a,b,c,d,e,k;
    printf("ferrari method");
    printf("\nenter value of a");
    scanf("%d",&a);
     printf("\nenter value of b");
    scanf("%d",&b); printf("\nenter value of c");
    scanf("%d",&c); printf("\nenter value of d");
    scanf("%d",&d); printf("\nenter value of e ");
    scanf("%d",&e);
    b=b/a;
    c=c/a;
    d=d/a;
    a=a/a;
    k=b/2;
    cardon(-8,(4*c),((-4)*d*k+8*e),((d*d)+(4*e*k*k)-4*c*e));


}
void cardon(float a,float b,float c,float d)
{
    float A,B,x;
    A=c/a-(b*b)/(3*a*a);
    B=d/a+(2*b*b*b)/(27*a*a*a)-b*c/(3*a*a);
    x=cuberoot(-B/2+sqrt(B*B/4+A*A*A/27))-cuberoot(B/2+sqrt(B*B/4+A*A*A/27))-b/(3*a);
    printf("\n \n %d \n \n",x);

}
float cuberoot(int x)
{
    return (pow(x,(1.0/3.0)));
}

