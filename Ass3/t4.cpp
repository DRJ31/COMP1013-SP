#include <stdio.h>
int fac(int a);//Calculate the factorial of a number
int main(){
    int a, b, c;
    puts("Please input 3 integers: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("The factorial sum of %d, %d and %d is %d\n", a, b, c, fac(a)+fac(b)+fac(c));
    return 0;
}
int fac(int a){
    int result = 1;
    for (int i = a; i > 0; i--)
        result *= i;
    return result;
}