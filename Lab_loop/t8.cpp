#include <stdio.h>
int checkInput(int a);
int main(){
    int n, counter;
    double result = 0.5;
    puts("Please input n: ");
    scanf("%d", &n);
    if (checkInput(n)){
        puts("Please input a non-negative integer.");
        return -1;
    }
    for (counter = 0; counter <= n; counter++){
        result *= 2;
    }
    printf("The result of 2^%d is %g\n", n, result);
    return 0;
}
int checkInput(int a){
    if (a < 0){
        return 1;
    }
    return 0;
}