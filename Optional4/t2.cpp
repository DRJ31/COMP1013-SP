#include <stdio.h>
int compareASCII(char a, char b);
int main(){
    char a, b;
    puts("Please input the first character: ");
    scanf("%c", &a);
    puts("Please input the second character: ");
    scanf("%*c%c", &b);    
    if (!compareASCII(a, b))
        printf("The ASCII code of %c is equal to the ASCII code of %c.\n", a, b);
    else if (compareASCII(a, b) == 1)
        printf("The ASCII code of %c is larger than the ASCII code of %c.\n", a, b);
    else
        printf("The ASCII code of %c is smaller than the ASCII code of %c.\n", a, b);
    return 0;    
}
int compareASCII(char a, char b){
    if (a == b)
        return 0;
    else if (a > b)
        return 1;
    else
        return -1;
}