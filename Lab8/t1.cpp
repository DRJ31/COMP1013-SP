#include <stdio.h>
float findBiggest(float a[], int n); // function prototype  
int main(){ 
    float value[4] = {2.5, -4.75, 1.2, 3.67}; 
    float bigValue; 
    bigValue = findBiggest(value, 4); 
    printf("bigValue = %f\n", bigValue);
    return 0; 
} 
float findBiggest(float a[], int n){   
    float biggest = a[0];//variable to store the biggest number
    for (int i = 1; i < n; i++){
        if (a[i] > biggest)
            biggest = a[i];
    }
    return biggest;
} 