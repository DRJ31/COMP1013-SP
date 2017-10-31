#include <stdio.h>
int checkInput(int a);
int main(){
    int n, counter = 1, result = 1;
    puts("Please input n: ");
    scanf("%d", &n);
    if (checkInput(n)){
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
int checkInput(int a){
    if (a < 0){
        return 1;
    }
    return 0;
}