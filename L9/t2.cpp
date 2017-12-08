#include <stdio.h>
int Power2(int n);
int main() {
	int n;
	printf("Please input the number: ");
	scanf("%d", &n);
	if (n <= 0) {
		puts("Please input a positive integer.");
		return 0;
	}
	printf("The power %d of 2 is: %d\n", n, Power2(n));
	return 0;
}
int Power2(int n) {
	if (n == 0)
		return 1;
	else if (n > 0)
		return 2 * Power2(n - 1);
	return 0;
}