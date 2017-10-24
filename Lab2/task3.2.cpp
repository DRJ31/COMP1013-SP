#include <stdio.h>
int main(){
	int a, b;
	printf("Please input 2 integers: \n");
	scanf("%d%d", &a, &b);
	if (b == 0){
		fprintf(stderr, "The second interger could not be 0.\n");
		return -1;
	}
	printf("%d + %d = %d\n", a, b, a+b);
	printf("%d - %d = %d\n", a, b, a-b);
	printf("%d * %d = %d\n", a, b, a*b);
	printf("%d / %d = %d\n", a, b, a/b);
	printf("%d %% %d = %d\n", a, b, a%b);
	return 0;
}
