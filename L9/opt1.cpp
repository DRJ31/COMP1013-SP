#include <stdio.h>
int zeroInBinary(int n);
int main() {
	int n;
	printf("Please input the number: ");
	scanf("%d", &n);
	if (n <= 0) {
		puts("Please input a positive integer.");
		return 0;
	}
	printf("There are %d 0's in %d's binary representation.\n", zeroInBinary(n), n);
	return 0;
}
int zeroInBinary(int n) {
	if (n == 1)
		return 0;
	else if (n % 2 == 0)
		return zeroInBinary(n / 2) + 1;
	else
		return zeroInBinary(n / 2);
}