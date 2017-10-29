#include <stdio.h>
char toLower(char a);
int abs(int a);
class Check
{
public:
	void checkA(int a) {
		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
			validA = 1;
		else
			validA = 0;
	}
	void checkB(int b) {
		if ((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'))
			validB = 1;
		else
			validB = 0;
	}
	int checkResult() {
		return validA & validB;
	}
private:
	int validA;
	int validB;
};
int main()
{
	char c, d;
	Check check;
	puts("Please input 2 letters.");
	scanf("%c %c", &c, &d);
	check.checkA(c);
	check.checkB(d);
	if (check.checkResult())
		printf("%c to %c is %d\n", c, d, abs(toLower(c) - toLower(d)));
	else
		puts("Please input valid value!");
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