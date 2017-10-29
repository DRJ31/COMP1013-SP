#include <stdio.h>
char toLower(char a);
int abs(int a);
int main()
{
	char c, d;
	puts("Please input 2 letters.");
	scanf("%c %c", &c, &d);
	printf("%c to %c is %d\n", c, d, abs(toLower(c) - toLower(d)));
	return 0;
}
char toLower(char a)
{
	if (a >= 'A' && a <= 'Z')
		a += 32;
	return a;
}
int abs(int a)
{
	if (a < 0)
		return -a;
	return a;
}