#include <stdio.h>
void toBinary(int number, char result[]);
int main(){
    int number;
    char result[60];
    while (true){
        puts("Please input a decimal number: ");
        scanf("%d", &number);
        if (number == 0){
            puts("Good bye.");
            break;
        }
        toBinary(number, result);
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
    for (int j = i; j >= 0; j--){
        printf("%c", result[j]);
    }
    puts("");
}