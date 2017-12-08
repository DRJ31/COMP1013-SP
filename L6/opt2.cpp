#include <stdio.h>
int isLeap(int year);
int main() {
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }, year, month, date, result = 0;
	puts("Please input year, month and date: ");
	scanf("%d%d%d", &year, &month, &date);
	for (int i = 0; i < month - 1; i++)
		result += days[i];
	result += date;
	if (isLeap(year))
		result++;
	printf("The total days is %d.\n", result);
	return 0;
}
int isLeap(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}