#include <stdio.h>
float findBiggest(float a[], int n); // function prototype  
float findLowest(float a[], int n);//find the lowest one
int main(){ 
    float value[4] = {2.5, -4.75, 1.2, 3.67}; 
    float bigValue, smallValue; 
    bigValue = findBiggest(value, 4); 
    smallValue = findLowest(value, 4);
    printf("bigValue = %f\nsmallValue = %f\n", bigValue, smallValue);
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
float findLowest(float a[], int n){
    float smallest = a[0];//variable to store smallest number
    for (int i = 1; i < n; i++){
        if (a[i] < smallest)
            smallest = a[i];
    }
    return smallest;
}