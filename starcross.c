#include<stdio.h>
int main(){
    int n,m;
    printf("enter the number of rows n:");
    scanf("%d",&n);
    printf("enter the number of column m:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==j  || i+j==n+1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
        return 0;
}