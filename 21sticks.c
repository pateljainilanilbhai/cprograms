#include <stdio.h>
int main()
{
    int matchstick = 21;
    int user,computer;

    while (matchstick>=1)
    {

        if (matchstick==1)
        {
            printf("\nMatch stick status:%d",matchstick);
            printf("\nYou loose!!!!!!:(:(");               break;
        }

        printf("\nMatch stick status:%d",matchstick);
        printf("\nEnter the choice (1,2,3,4)):");        scanf("%d",&user);

        printf("\nYou picked %d",user);
        if (user>=5 || user <=0)
        {
            printf("\nInvalid value");            continue;
        }

        computer = 5 - user;

        printf("\nComputer picked%d",computer);
        matchstick = matchstick - computer - user;

    }
}
