#include <stdio.h>
int* bubble(int* numbers, int length);
int main(){
    int numbers[100], i;
    for (i = 0; i < 100; i++){
        scanf("%d", &numbers[i]);
        if (numbers[i] <= 0)
            break;
    }
    int* result;
    result = bubble(numbers[100], i);
    for (int j = 0; j < i; j++){
        printf("%d ", );
    }
}
int* bubble(int* numbers, int length){
    int tmp;
    for (int i = 1; i < length; i++){
        if (numbers[i] < numbers[i-1]){
            tmp = numbers[i];
            numbers[i] = numbers[i-1];
            numbers[i-1] = tmp;
        }
    }
    return numbers;
}