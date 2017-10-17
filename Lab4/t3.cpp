#include <stdio.h>
int main(){
    int a, b;
    printf("Please input two integers: \n");
    scanf("%d%d", &a, &b);
    printf("Between %d and %d, %d has a greater absolute value.\n", a, b, (a > 0 ? a : -a) > (b > 0 ? b : -b) ? (a > 0 ? a : -a) : (b > 0 ? b : -b));
    return 0;
}