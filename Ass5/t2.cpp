#include <stdio.h>
#include <stdlib.h>
void printResult(int *arr, int length);//Function to find the biggest and the smallest number
int main(){
    int *numptr = (int *)malloc(sizeof(int));//Initialize pointer to store numbers
    int tmp, i = 0;//tmp is a variable to check if input is -1, i is the serial of inputed number
    puts("Please input numbers: ");
    while (true){
        scanf("%d", &tmp);
        if (tmp == -1)
            break;
        *(numptr+i) = tmp;//If the number is not -1, then put it into pointer
        i++;
        numptr = (int *)realloc(numptr, (i+1)*sizeof(int));//Spare more space to store numbers
    }
    printResult(numptr, i);
    free(numptr);
    return 0;
}
void printResult(int *arr, int length){
    int biggest = *arr, smallest = *arr;
    for (int j = 0; j < length; j++){
        if (*(arr+j) > biggest)
            biggest = *(arr+j);
        else if (*(arr+j) < smallest)
            smallest = *(arr+j);
    }
    printf("The biggest number is %d, the smallest number is %d\n", biggest, smallest);
}