#include <stdio.h>
void toBinary(int number, char result[]);//Calculate the binary of a decimal number
int main(){
    int number;
    char result[60];//An array to store a string
    while (true){
        puts("Please input a decimal number: ");
        scanf("%d", &number);
        if (number == 0){
            puts("Good bye.");
            break;
        }
        printf("%d is ", number);
        toBinary(number, result);
        puts(" in binary.");
    }
    return 0;
}
void toBinary(int number, char result[]){
    int i = 0;
    while (number > 0){
        if (number % 2 == 1){
            result[i] = '1';
        }
        else{
            result[i] = '0';
        }
        number /= 2;
        i++;
    }
    i--;
    for (int j = i; j >= 0; j--){
        printf("%c", result[j]);
    }
}