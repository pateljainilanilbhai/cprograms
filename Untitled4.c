#include<stdio.h>
#include<conio.h>
#define pie 3.14
main()
{
    typedef float value;
    value area,radius;
    printf("enter the value of radius");
    scanf("%f",&radius);
    area=radius*radius*pie;
    printf("the area of circle is %f",area);


}
