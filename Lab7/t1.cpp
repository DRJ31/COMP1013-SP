#include <stdio.h>
int main(){
    puts("Please input some numbers (input 0 to exit): ");
    int numArr[50], i;
    for (i = 0; i < 50; i++){//scan numbers
        scanf("%d", &numArr[i]);
        if (!numArr[i])
            break;
    }
    puts("Among your inputs, the following are positive: ");
    for (int j = 0; j < i; j++){//read and judge numbers
        if (numArr[j] > 0)
            printf("%d ", numArr[j]);
    }
    puts("");
    return 0;
}