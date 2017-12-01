#include <stdio.h>
#include <string.h>
int power(int num, int pow);//Calculate the power of a number
int toDecimal(char a[]);//Transfer a binary string to decimal
int main(){
    char bin[60];
    while (true){
        puts("Please input a binary number: ");
        scanf("%50s", bin);
        if (strcmp(bin, "0") == 0){
            puts("Good bye.");
            break;
        }
        printf("%s is %d in decimal.\n", bin, toDecimal(bin));
    }
    
    return 0;
}
int toDecimal(char a[]){
    int result = 0;//Result of decimal form of binary number
    int length = strlen(a) - 1;//The value of index of the last character
    for (int i = length; i >= 0; i--){
        if ((int)a[i] == 49){
            result += power(2, length - i);
        }
    }
    return result;
}
int power(int num, int pow){
    int result = 1;
    for (int i = 0; i < pow; i++){
        result *= num;
    }
    return result;
}