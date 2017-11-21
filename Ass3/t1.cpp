#include <stdio.h>
int* bubbleSort(int arr[]);//Sort the array using bubble sort
int main(){
    int arr[10] = {3, 10, 15, 30, 55, 77};
    puts("Please input an integer: ");
    scanf("%d", &arr[6]);
    int* result = bubbleSort(arr);//The result of sorted array
    for (int i = 0; i < 7; i++)
        printf("%d ", *(result+i));
    puts("");
    return 0;
}
int* bubbleSort(int arr[]){
    int status;
    do{
        status = 0;
        for (int i = 1; i < 7; i++){
            if (arr[i-1] > arr[i]){
                int tmp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = tmp;
                status++;
            }
        }
    }while(status != 0);
    return arr;
}