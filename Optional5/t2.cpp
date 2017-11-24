#include <stdio.h>
float exchange(float a[], int n);
int main(){
    float value[4] = {2.5, -4.75, 1.2, 3.67};
    exchange(value, 4);
    printf("Value[0] = %f", exchange(value, 4));
    return 0;
}
float exchange(float a[], int n){
    float biggest = a[0];
    for (int i = 1; i < 4; i++){
        if (a[i] > biggest){
            biggest = a[i];
        }
    }
    return biggest;
}