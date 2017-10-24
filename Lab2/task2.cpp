#include <stdio.h>
int main(void){
    printf("Number of bytes used to store a char type variable is %d\n", sizeof(char));
    printf("Number of bytes used to store a short type variable is %d\n", sizeof(short));
    printf("Number of bytes used to store a int type variable is %d\n", sizeof(int));
    printf("Number of bytes used to store a long type variable is %d\n", sizeof(long));
    printf("Number of bytes used to store a float type variable is %d\n", sizeof(float));
    printf("Number of bytes used to store a double type variable is %d\n", sizeof(double));
    printf("Number of bytes used to store a bool type variable is %d\n", sizeof(bool));
    return 0;
} 
