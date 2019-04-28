#include<stdio.h>
//#include<iostream>
//sing namespace std;

void push(int );
int pop();
int peep(int );
void change(int ,int );
void display();

int  stack[5],top = -1;

int main()
{
    int x,add,del,dis,m,n,f,g;
    do
    {
    printf("\n press 1 for PUSH..");
    printf("\n press 2 for POP..");
    printf("\n press 3 for PEEP(from last)..");
    printf("\n press 4 for display..");
    printf("\n press 5 for change(from last)");
    printf("\n press 0 for exit");
    scanf("%d",&x);
    switch(x)
    {
     case 1:
       {
           scanf("%d",&add);
           push(add);
           break;
       }
     case 2:
        {

            scanf("%d",&del);

            m=pop();
            printf("\n item %d is deleted",m);
            break;
        }
     case 3:
        {
            printf("\n enter position");
            scanf("%d",&dis);
            n=peep(dis);
            printf("\n  element is %d",n);
            break;
        }
     case 4:
        display();
        break;
     case 5:

        printf("\n enter position of element for change");
        scanf("%d",&f);
        printf("\n enter new value");
        scanf("%d",&g);
        change(f,g);
        break;
     default:
        printf("\n Invalid choice..");
        }
    }
while(x);
    return 0;

}


int peep(int dis)
{
   int i;
      if(top == -1 || top >5)
      {
          printf("\n not display..");
      }
      else if(top == -1 || top >5)
      {
          printf("\n not display..");
      }
      else
      { //printf("\n %d",top);
          i=top-dis+1;
         return stack[i];
      }

      { //printf("\n %d",top);
          i=top-dis+1;
         return stack[i];
      }
    //return i;
}


void push(int n)
{
    if(top > 5)
    {
        printf("\n stack overflow..");
    }



    else{
        top++;
        stack[top] = n;
    }

}
int pop()
{
    int i;
    if(top <= -1)
    {
        printf("\n cannot pop element because stack is underflow..");

    }
    else
    {
        i= stack[top];
        stack[top] = NULL;
        top --;
        return i;
    }
}

void display()
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("\t %d",stack[i]);
    }
}

void change(int f,int g)
{
    int i;
    if(top == -1 || top >5)
      {
          printf("\n not display..");
      }
      else
      { //printf("\n %d",top);
          i=top-f+1;
          stack[i] = g;

      }

}

















