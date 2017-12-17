#include <stdio.h>
/*
This program receive numbers of double type and output them.
Input the numbers in a line and press enter to stop input.
*/
int main(){
    double numbers[20];
    int i;
    puts("Please input no more than 20 numbers in one line (Press Enter to stop): ");
    for (i = 0; i < 20; i++){
        scanf("%lf", &numbers[i]);
        if (getchar() == '\n')
            break;
    }
    double *pt = numbers;//Initialize the pointer of the array
    for (int j = 0; j <= i; j++){
        printf("The value is: %g, the address is: %p\n", *pt, pt);
        pt++;
    }
    puts("");
    return 0;
}