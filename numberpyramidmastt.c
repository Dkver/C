#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int i=1;i<=n+1;i++){
        printf("%d",i);
    }
    for(int i=n;i>=1;i--){
        printf("%d",i);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("%d",j);
        }
    for(int k=1;k<=nsp;k++){
        printf(" ");
    }
    for(int j=nst;j>=1;j--){
            printf("%d",j);
    }
    nst--;
    nsp+=2;
    printf("\n");
    }
    return 0;
}