#include<stdio.h>
void swap(int* x, int* y){
    int temp;
    temp=*x;
    *x=*y;  //a=9 this line means
    *y=temp;  //*y=2
    return;
}
int main(){
    int a=2;
    int b=5;
    swap(&a,&b);
   printf("%d\n",a);
   printf("%d",b);
   return 0;
}