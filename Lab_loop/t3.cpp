#include <stdio.h>
int main(){
    int n, counter = 1, result = 1;
    puts("Please input n: ");
    scanf("%d", &n);
    if (n < 0){
        puts("Please input a non-negative integer.");
        return -1;
    }
    while(counter <= n){
        result *= 2;
        counter++;
    }
    printf("The result of 2^%d is %d\n", n, result);
    return 0;
}