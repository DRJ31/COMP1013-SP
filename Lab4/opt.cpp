#include <stdio.h>
int bitnum(int i, int pos);
int main(){
    int a, result=0, i;
    scanf("%d", &a);
    printf("%d is %d%d%d%d in binary.\n", a, bitnum(a, 1), bitnum(a, 2), bitnum(a, 3), bitnum(a, 4));
    return 0;
}
int bitnum(int i, int pos){
    return (i >> (4 - pos)) % 2;
}