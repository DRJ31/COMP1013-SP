#include <stdio.h>
int main(){
    int n, counter = 0; 
    double result = 0.5;
    puts("Please input n: ");
    scanf("%d", &n);
    if (n < 0){
        puts("Please input a non-negative integer.");
        return -1;
    }
    do{
        result *= 2;
        counter++;
    }while(counter <= n);
    printf("The result of 2^%d is %g\n", n, result);
    return 0;
}