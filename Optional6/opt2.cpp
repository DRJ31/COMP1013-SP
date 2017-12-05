#include <stdio.h>
int pow(int number, int n);
int cubic(int number);
bool calc(int number);
int main() {
	for (int i = 3; i < 1000; i += 3) {
		if (calc(i))
			printf("%d [OK]\n", i);
		else
			printf("%d [Failed]\n", i);
	}
	return 0;
}
int pow(int number, int n) {
	if (n == 0)
		return 1;
	else if (n > 0)
		return number * pow(number, n - 1);
	return 0;
}
int cubic(int number) {
	if (number < 10 && number > 0)
		return pow(number, 3);
	else if (number >= 10)
		return pow(number % 10, 3) + cubic(number / 10);
	return 0;
}
bool calc(int number) {
	if (number == 153)
		return true;
	else if (number % 3 != 0)
		return false;
	return calc(cubic(number));
}