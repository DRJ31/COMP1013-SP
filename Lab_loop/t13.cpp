#include <stdio.h>
int main(){
    int sum = 0, i;
    for (i = 0; i <= 100; i++){
        if (i % 2 == 1)
            sum += i;
    }
    printf("i = %d, sum = %d\n", i, sum);
    return 0;
}