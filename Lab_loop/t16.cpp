#include <stdio.h>
int main(){
    int i, j;
    for (i = 1; i <= 10; i++){
        for (j = 0; j < i; j++){
            printf("* ");
        }
        puts("");
    }
    return 0;
}