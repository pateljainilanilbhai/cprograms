#include<stdio.h>
#include<conio.h>
int coins[10],count[10],n;
int change(int rs){
    int temp,i=0;
    temp=rs;
    while(temp!=0 && i<n){
        count[i]=temp/coins[i];
        if(count[i]>0){
            temp=temp-(count[i]*coins[i]);
        }
        i++;
    }
    return temp;
}
void main(){
    printf("Enter no.of coins:");
    scanf("%d",&n);
    printf("\nEnter coins:");
    for(i=0;i<n;i++){
        scanf("%d",&coins[i]);
    }
    printf("\nEnter cost:");
    scanf("%d",&rs);
    remain=change(rs);
    if(remain==0){
        printf("\nSolution is:%d");
        for(i=0;i<n;i++){
            printf("\ncoins of %d :%d",coins[i],count[i]);
        }
    }
    else{
        printf("\nNo solution");
    }

}
