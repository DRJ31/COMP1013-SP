#include <stdio.h>
int nextPrime(int a);
int checkPrime(int a);
int main()
{
	int number;
	for (number = 4; number <= 100; number += 2)
	{
		int firstNum = 2;
		while (firstNum <= (number / 2))
		{
			if (checkPrime(number - firstNum))
			{
				printf("even number: %d = %d + %d\n", number, firstNum, number - firstNum);
				break;
			}
			else
				firstNum = nextPrime(firstNum);
		}
	}
	return 0;
}
int checkPrime(int a)
{
	int i;
	for (i = 3; i <= a / 2; i += 2)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
}
int nextPrime(int a)
{
	int i;
	if (a == 2)
		return 3;
	else
	{
		for (i = a + 2; ; i += 2)
		{
			if (checkPrime(i))
				return i;
		}
	}
}