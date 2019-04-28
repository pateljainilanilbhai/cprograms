#include<stdio.h>
#include<conio.h>
int P[20],s[20][20],no;
int  m[20][20];
char ch='A';
void MCM(){
    int i,j,k,l;
    int temp;
    for(i=1;i<=no;i++){
        m[i][i]=0;
    }
    for(l=2;l<=no;l++){
        for(i=1;i<=no-l+1;i++){
            j=i+l-1;
            m[i][j]=100000;
            for(k=i;k<j;k++){
              temp=m[i][k]+m[k+1][j]+P[i-1]*P[k]*P[j];
              if(temp<m[i][j]){
                m[i][j]=temp;
                s[i][j]=k;
              }
            }
        }
    }
}
Opti(i,j){
    if(i==j){
        printf("%c",ch);
        ch++;
    }
    else{
        printf("(");
        Opti(i,s[i][j]);
        Opti(s[i][j]+1,j);
        printf(")");
    }
}

void main(){
    int n,i,j;
    printf("\nEnter no. of matrix:");
    scanf("%d",&no);
    printf("\n\Matrices are: ");
    for(n=1;n<=no;n++){
        printf("%c ",ch);
        ch++;
    }
    printf("\nEnter P values:\n");
    for(i=0;i<=no;i++){
        printf("P[%d]=",i);
        scanf("%d",&P[i]);
    }
    MCM();
    printf("\nM matrix\n");
    for(i=1;i<=no;i++){
        for(j=1;j<i;j++){
            printf("     ");
        }
        for(j=i;j<=no;j++){
            printf("%5d",m[i][j]);
        }
        printf("\n");
    }
    printf("\ns table:\n");
    for(i=1;i<=no;i++){
        for(j=1;j<i;j++){
            printf("  ");
        }
        for(j=i;j<=no;j++){
            printf("%2d",s[i][j]);
        }

        printf("\n");
    }
    ch='A';
    printf("\n\tOptimal solution: ");
    Opti(1,no);
}
