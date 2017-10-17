#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    puts("Please input three integers: ");
    printf("Among %d, %d and %d, %d is the greatest.\n", a, b, c, (a > b ? a : b) > c ? (a > b ? a : b) : c);
    return 0;
}