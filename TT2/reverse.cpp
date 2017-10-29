#include <stdio.h>
int main()
{
	unsigned long long number;
	scanf("%llu", &number);
	while (number > 0)
	{
		printf("%d ", number % 10);
		number /= 10;
	}
	puts("");
	return 0;
}