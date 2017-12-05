#include <stdio.h>
int Fac(int n);
int main() {
	int n;
	printf("Please input the number: ");
	scanf("%d", &n);
	if (n <= 0) {
		puts("Please input a positive integer.");
		return 0;
	}
	printf("The factorial of %d is: %d\n", n, Fac(n));
	return 0;
}
int Fac(int n) {
	if (n == 1)
		return 1;
	else if (n > 1)
		return n * Fac(n - 1);
	return 0;
}