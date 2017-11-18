#include <stdio.h>
void checkCharacter(char a);
int number = 0, letter = 0, other = 0;
int main() {
	char a;
	do
	{
		a = getchar();
		checkCharacter(a);
	} while (a != '\n');
	other--;
	printf("letter: %d numbers: %d other: %d\n", letter, number, other);
	return 0;
}
void checkCharacter(char a) {
	if (('A' <= a && 'Z' >= a) || ('a' <= a && a <= 'z'))
		letter++;
	else if ('0' <= a && '9' >= a)
		number++;
	else
		other++;
}