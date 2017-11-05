#include <stdio.h>
int* factors(int number);
int checkPerfect(int arr[], int number);
int main() {
	int range, *factor;
	scanf("%d", &range);
	for (int i = 1; i <= range; i++)
	{
		factor = factors(i);
		if (checkPerfect(factor, i))
		{
			printf("%d its factors are ", i);
			for (int i = 1; i < *factor; i++)
				printf("%d ", *(factor + i));
			puts("");
		}
	}
	return 0;
}
int* factors(int number) {//find all the factors of a number
	int* arr = new int[number], j = 1;
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			arr[j] = i;
			j++;
		}
	}
	arr[0] = j;
	return arr;
}
int checkPerfect(int arr[], int number) {//Check if the number is perfect number
	int result = 0;
	for (int i = 1; i < arr[0]; i++) {
		result += arr[i];
	}
	return result == number;
}