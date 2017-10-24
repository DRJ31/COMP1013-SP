#include <stdio.h>
int bitnum(int num, int pos);
int main(){
    int a;
    puts("Please input an integer between 0 to 15: ");
    scanf("%d", &a);
    printf("%d is %d%d%d%d in binary.\n", a, bitnum(a, 1), bitnum(a, 2), bitnum(a, 3), bitnum(a, 4));
    return 0;
}
int bitnum(int num, int pos){
    return (num >> (4 - pos)) % 2;
}