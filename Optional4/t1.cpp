#include <stdio.h>
#include <stdio.h>
int* bubble(int numbers[], int length);
int main() {
	int numbers[100], i;
	for (i = 0; i < 100; i++) {
		scanf("%d", &numbers[i]);
		if (numbers[i] <= 0)
			break;
	}
	int* result = bubble(numbers, i);
	for (int j = 0; j < i; j++) {
		printf("%d ", *(result+j));
	}
	puts("");
	return 0;
}
int* bubble(int numbers[], int length) {
	while (1) {
		int count = 0;
		for (int i = 1; i < length; i++) {
			if (numbers[i] > numbers[i - 1]) {
				int tmp = numbers[i];
				numbers[i] = numbers[i - 1];
				numbers[i - 1] = tmp;
				count++;
			}
		}
		if (!count)
			break;
	}
	return numbers;
}