#include<stdio.h>
int main(){
    int a=5;
    int* x=&a;
    printf("%p\n",x);
    printf("%d",&x);   //%p se address print hota hai
    return 0;
}
