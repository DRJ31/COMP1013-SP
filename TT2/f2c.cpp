#include <stdio.h>
int main()
{
	double f;
	puts("Please input Fahrenheit temperature: ");
	scanf("%lf", &f);
	printf("The Celsius temperature is: %lf.\n", 5 * (f - 32) / 9);
	return 0;
}