#include <stdio.h>
int main() {
	int matrix[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < i; j++) {
			int tmp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = tmp;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", matrix[i][j]);
		}
		puts("");
	}
	return 0;
}