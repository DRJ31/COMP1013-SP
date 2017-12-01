#include <stdio.h>
int binarySearch(int A[], int x, int l, int r);
int main(){
    return 0;
}
int binarySearch(int A[], int x, int l, int r){
    if (x == A[r])
        return r;
    else if (A[r] < x)
        return binarySearch(A, x, l, (r-l) / 2 + l);
    else
        return binarySearch(A, x, , r);
}