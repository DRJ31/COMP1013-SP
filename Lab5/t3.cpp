#include <stdio.h>
int main()
{
	double dollar;//The amount of dollars
	char currency;//Character to judge which currency to convert
	puts("Please input the amount of US dollars: ");
	scanf("%lf", &dollar);
	puts("Convert to Euro(E) or RMB(R)?");
	getchar();
	scanf("%c", &currency);
	if (currency == 'E' || currency == 'e')
		printf("%g US dollars converts to %g euros.\n", dollar, dollar * 0.5);
	else if (currency == 'R' || currency == 'r')
		printf("%g US dollars converts to %g RMB.\n", dollar, dollar * 7);
	else
		puts("Please input the right character.");
	return 0;
}