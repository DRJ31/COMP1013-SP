#include <stdio.h>
int checkInput(int a);
int main(){
    int n, counter = 0; 
    double result = 0.5;
    puts("Please input n: ");
    scanf("%d", &n);
    if (checkInput(n)){
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
int checkInput(int a){
    if (a < 0){
        return 1;
    }
    return 0;
}