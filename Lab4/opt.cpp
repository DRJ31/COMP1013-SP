#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Please input an integer between 0 to 15: \n");
    int a, i, tmp;
    char result[5];
    scanf("%d", &a);
    tmp = a;
    itoa(a, result, 2);
    printf("%d is %s in binary.\n", tmp, result);
    return 0;
}