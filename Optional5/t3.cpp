#include "stringLength.hpp"
int main(){
    char str[50];
    puts("Please input a string: ");
    scanf("%s", str);
    printf("The length of this string is %d.\n", stringLength(str));
    return 0;
}