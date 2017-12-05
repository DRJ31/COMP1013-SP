#include <stdio.h>
void inverse(int numbers[], int length);//Inverse the sequence of the array
int main() {
	int nums[20], i;
	puts("Please input a sequence of numbers in a line: ");
	for (i = 0; i < 20; i++) {//You have to input the sequence of number in a line
		scanf("%d", &nums[i]);
		if (getchar() == '\n')
			break;
	}
	inverse(nums, i + 1);
	for (int j = 0; j <= i; j++)
		printf("%d ", nums[j]);
	puts("");
	return 0;
}
void inverse(int number[], int length) {
	for (int i = 0; i < length / 2; i++) {//Inverse the numbers
		int tmp = number[i];
		number[i] = number[length - i - 1];
		number[length - i - 1] = tmp;
	}
}