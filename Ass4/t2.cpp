#include <stdio.h>
bool prime(int number);//Check if the number is a prime number
int biggestDivisor(int number);//Find the biggest divisor of a number
int main() {
	int num;
	printf("Please input a number: ");
	scanf("%d", &num);
	if (num <= 0) {
		puts("Please input a positive integer: ");
		return 0;
	}
	if (prime(num))
		puts("The input number is a prime number.");
	else
		printf("The biggest divisor of %d is %d.\n", num, biggestDivisor(num));
	return 0;
}
bool prime(int number) {
	for (int i = 2; i < number; i++) {
		if (number % i == 0)
			return false;
	}
	return true;
}
int biggestDivisor(int number) {
	int biggest;//Value of biggest divisor
	for (int i = 2; i < number; i++) {
		if (number % i == 0)
			biggest = i;
	}
	return biggest;
}