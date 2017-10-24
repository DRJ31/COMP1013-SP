#include <stdio.h>
int main()
{
	double dollar;
	char currency;
	puts("Please input the amount of US dollars: ");
	scanf("%lf", &dollar);
	puts("Convert to Euro(E) or RMB(R)?");
	getchar();
	scanf("%c", &currency);
	if (currency == 'E')
		printf("%g US dollars converts to %g euros.\n", dollar, dollar * 0.5);
	else if (currency == 'R')
		printf("%g US dollars converts to %g RMB.\n", dollar, dollar * 7);
	else
		puts("Please input the right character.");
	return 0;
}