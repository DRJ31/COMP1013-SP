#include <stdio.h>
#include <string.h>
double exp(double num, int expo);
double resultIntNum(char num[], int length);
int checkPointPos(char str[]);
double resultFloatNum(char num[], int begin, int length);
int main() {
	char a[100];
	scanf("%s", a);
	if (!checkPointPos(a))
		printf("The number is %g\n", resultIntNum(a, strlen(a)));
	else 
		printf("The number is %g\n", resultIntNum(a, checkPointPos(a)) + resultFloatNum(a, checkPointPos(a), strlen(a)));
	return 0;
}
double resultIntNum(char num[], int length) {
	double result = 0;
	if (num[0] <= '9' && num[0] >= '0') {
		for (int i = 0; i < length; i++)
			result += ((int)num[length - i - 1] - 48) * exp(10, i);
	}
	else {
		for (int i = 0; i < length - 1; i++)
			result += ((int)num[length - i - 1] - 48) * exp(10, i);
		if (num[0] == '+')
			return result;
		else if (num[0] == '-')
			return -result;
		else
			return 0;
	}
	return result;
}
double exp(double num, int expo) {
	double result = 1;
	for (int i = 0; i < expo; i++)
		result *= num;
	return result;
}
int checkPointPos(char str[]) {
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '.')
			return i;
	}
	return 0;
}
double resultFloatNum(char num[], int begin, int length) {
	double result = 0;
	for (int i = begin + 1; i < length; i++) 
		result += ((int)num[i] - 48) * exp(0.1, i - begin);
	if (num[0] == '-')
		return -result;
	return result;
}