#include <stdio.h>
int main()
{
	int n;
	puts("Please input n: ");
	scanf("%d", &n);
	if (n < 0)
		n = -n;
	printf("The result is %d.\n", n + n);
	return 0;
}