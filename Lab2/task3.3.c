#include <stdio.h>
int main(){
	int a, b;
	printf("Please input 2 integers: \n");
	scanf("%d%d", &a, &b);
	printf("%d\n", a > b ? a : b);
}
