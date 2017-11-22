#include <stdio.h>
double average(int a[], int length);//Calculate the average of numbers
int main(){
    int numbers[100], i;
    for (i = 0; i < 100; i++){//Scan numbers until -1
        scanf("%d", &numbers[i]);
        if (numbers[i] == -1)
            break;
    }
    printf("The average of these integers are: %g\n", average(numbers, i));
    return 0;
}
double average(int a[], int length){
    double sum = 0;
    int j;
    for (j = 0; j < length; j++)//The sum of all the numbers
        sum += a[j];
    return sum / j;
}