#include <stdio.h>
int main(){
    int matrix[4], tmp;//tmp to receive number in the second array
    puts("Please input matrix 1 (2*2): ");
    for (int i = 0; i < 4; i++)//scan number in first array
        scanf("%d", &matrix[i]);
    puts("Please input matrix 2 (2*2): ");
    for (int i = 0; i < 4; i++){//scan number in second array and add to first arr
        scanf("%d", &tmp);
        matrix[i] += tmp;
    }
    puts("The SUM matrix is: ");
    printf("%d\t%d\n%d\t%d\n", matrix[0], matrix[1], matrix[2], matrix[3]);
    return 0;
}