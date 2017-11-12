#include <stdio.h>
int main(){
    int i, j, k, num;
    printf("How many lines should we draw? ");
    scanf("%d", &num);
    for (i = 0; i <= num; i++){
        for (j = 0; j <= num - i; j++)
            printf(" ");
        for (k = 0; k < 2 * i - 1; k++)
            printf("*");
        puts("");
    }
    return 0;
}