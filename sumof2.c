#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int a,b;
    printf("enter 6he values of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    int sum=add(a,b );
    printf( " the sum of a and b is  %d",sum);
    return 0;
}