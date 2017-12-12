#include <stdio.h>
void exchange(int *x, int *y){//Exchange the value of x and y
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a = 10, b = 20;
    printf("before exchange: a = %d, b = %d\n", a, b);
    exchange(&a, &b);
    printf("after exchange: a = %d, b = %d\n", a, b);
    return 0;
}