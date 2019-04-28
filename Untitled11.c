#include<math.h>
#include<conio.h>
#include<stdio.h>

int main()
{

    float x; int z; long int k; z=-1;  int i; int y; y=0; long int a; k=1;
    printf("this program is for approx sin x");

    printf("enter the value of x");
    scanf("%f",&x);
    for(i=1;i>-1;i+2)
    {
        z=z+1;
        for(a=1;a<=i;a++)
        {
            k=k*a;

        }
        printf("%d",k);
        k=1;

    }

}
