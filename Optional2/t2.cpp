#include <stdio.h>
int checkNumber(int number);
int cube(int number);
int main(){
    for (int i = 3; i < 1000; i += 3){
        if (checkNumber(i))
            printf("%d [OK]\n", i);
    }
    return 0;
}
int checkNumber(int number){
    int i, j = 0, result = 0;
    while(j < 50){
        i = 0;
        while(number >= 1){
            result += cube(number % 10);
            number /= 10;
            i++;
        }
        if (result != 153){
            number = result;
            result = 0;
        }
        else
            return 1;
        j++;
    }
    return 0;
}
int cube(int number){
    return number * number * number;
}