#include <stdio.h>
const char* judgeNum(int number);//Judge if the number is perfect square.
int digitNum(int number);//Check the number of digits.
int main()
{
	int number;
	puts("Please input a positive integer: ");
	scanf("%d", &number);
	if (number <= 0)//Situation when the number is not a positive integer
	{
		puts("Please input a positive integer!");
		return -1;
	}
	printf("The number of digits of %d is %d, %d is %s.\n", number, digitNum(number), number, judgeNum(number));
	return 0;
}
const char* judgeNum(int number)
{
	int i = 1;
	do
	{
		if (i * i == number)
			return "a perfect square";
		i++;
	} while (number >= i * i);
	return "not a perfect square";
}
int digitNum(int number)
{
	int length = 1;//The length of input number
	while (number >= 10)
	{
		number /= 10;
		length++;
	}
	return length;
}