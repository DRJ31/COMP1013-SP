#include <stdio.h>
int binarySearch(int A[], int x, int l, int r);//Use binary search to search for numbers
int main(){
    int arr[] = {-34, -33, -21, -13, -2, 3, 4, 6, 9, 12, 21, 23, 25, 32, 42, 48, 50}, x;
    puts("The array is: ");
    int arrLength = sizeof(arr) / sizeof(int);//Length of the array
    for (int i = 0; i < arrLength - 1; i++)//Print the array
        printf("%d, ", arr[i]);
    printf("%d\n", arr[arrLength-1]);
    puts("Please input an integer: ");
    scanf("%d", &x);
    if (binarySearch(arr, x, 0, arrLength) != -1)
        printf("%d's position in the array is: %d\n", x, binarySearch(arr, x, 0, arrLength));
    else
        printf("%d is not in this array.\n", x);
    return 0;
}
int binarySearch(int A[], int x, int l, int r){
    int pos = (l + r) / 2;
    if (l > r)//When the number cannot be found, break recursive
        return -1;
    if (x == A[pos])
        return pos;
    else if (A[pos] > x)
        return binarySearch(A, x, l, pos - 1);
    else//A[pos] < x
        return binarySearch(A, x, pos + 1, r);
}