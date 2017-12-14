#include <stdio.h>
/*
This program receive numbers of double type and output them.
Input 0 to stop scanning.
*/
int main(){
    double numbers[20];
    int i;
    puts("Please input no more than 20 numbers (Enter 0 to stop): ");
    for (i = 0; i < 20; i++){
        scanf("%lf", &numbers[i]);
        if (numbers[i] == 0)
            break;
    }
    double *pt = numbers;//Initialize the pointer of the array
    for (int j = 0; j <= i; j++){
        printf("%g ", *(pt+j));
    }
    puts("");
    return 0;
}