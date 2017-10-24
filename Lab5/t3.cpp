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
	switch (currency)
	{
	case 'E':
		printf("%g US dollars converts to %g euros.\n", dollar, dollar * 0.5);
		break;
	case 'R':
		printf("%g US dollars converts to %g RMB.\n", dollar, dollar * 7);
		break;
	default:
		puts("Please input the right character.");
		break;
	}
	return 0;
}