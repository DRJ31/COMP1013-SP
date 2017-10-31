#include <stdio.h>
int main(){
    int n, counter, result = 1;
    puts("Please input n: ");
    scanf("%d", &n);
    if (n < 0){
        puts("Please input a non-negative integer.");
        return -1;
    }
    for (counter = 0; counter < n; counter++){
        result *= 2;
    }
    printf("The result of 2^%d is %d\n", n, result);
    return 0;
}