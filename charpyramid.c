#include<stdio.h>
int main(){
    int n;
    printf("enter the value n:");
    scanf("%d",&n);
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            int d=j+64;
            char ch=(char)d;
            printf("%c",ch);
            d++;
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
}