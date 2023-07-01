#include <stdio.h>
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
     printf("%d\n", x);
    printf("%d", y);
    return;
}
int main()
{
    int a = 4;
    int b = 8;
    swap(a, b);
    return 0;
}