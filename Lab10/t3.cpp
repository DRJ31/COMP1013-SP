#include <stdio.h>
int func(int n);
int main(){
    int n;
    puts("Please input a positive integer: ");
    scanf("%d", &n);
    if (n <= 0){//Remind user to input a positive integer
        puts("Please input a positive integer.");
        return 0;
    }
    printf("T(%d)=%d\n", n, func(n));
    return 0;
}
int func(int n){//Calculate T(n)
    if (n == 1)
        return 1;
    else if (n > 1)
        return func(n/2) + n;
    return 0;
}