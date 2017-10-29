#include <stdio.h>
int main()
{
	int height, weight;
	puts("Please input height(cm) and weight(kilo): ");
	scanf("%d%d", &height, &weight);
	if ((height - 105) > (weight + 20))
		puts("You are too slim.");
	else
	{
		if (((weight - 10) < (height - 105)) && ((height - 105) <= (weight + 20)))
			puts("You are fit.");
		else
			puts("You are too fat.");
	}
	return 0;
}