#include <stdio.h>
int exp(int number, int exponent);//Calculate the result of 2^n or 3^n
int main()
{
	int n;//The exponent number
	puts("Please input n: ");
	scanf("%d", &n);
	if (n < 0)
	{
		puts("Please input a natural number.");
		return -1;
	}
	printf("The result of 2^%d + 3^%d is %d.\n", n, n, exp(2, n) + exp(3, n));
	return 0;
}
int exp(int number, int exponent)
{
	int result = 1;
	for (int i = 0; i < exponent; i++)
		result *= number;
	return result;
}