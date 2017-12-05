#include <stdio.h>
int findNumber(int n); //Find a number in a sequence of numbers
int main() {
	printf("The value of a16 is: %d\n", findNumber(16));
	return 0;
}
int findNumber(int n) {
	if (n == 1)
		return 2;
	else
		return 2 * findNumber(n - 1) + 1;
}