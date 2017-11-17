#include <stdio.h>
#include <string.h>
int exp(int num, int expo);
int resultNum(char num[], int length);
int main(){
    char a[100];
    scanf("%s", a);
    printf("The number is %d\n", resultNum(a, strlen(a)));
    return 0;
}
int resultNum(char num[], int length){
    int result = 0;
    if (num[0] <= '9' && num[0] >= '0'){
        for (int i = 0; i < length; i++)
            result += ((int)num[length-i-1]-48) * exp(10, i);
    }
    else{
        for (int i = 0; i < length - 1; i++)
            result += ((int)num[length-i-1]-48) * exp(10, i);
        if (num[0] == '+')
            return result;
        else if (num[0] == '-')
            return -result;
        else
            return 0;
    }
    return result;
}
int exp(int num, int expo){
    int result = 1;
    for (int i = 0; i < expo; i++)
        result *= num;
    return result;
}