#include <stdio.h>
int* numberOfCases(char str[50][50], int length);
int main() {
	char str[50][50], s;
	int i = 0;
	while (1) {
		scanf("%s", &str[i]);
		s = getchar();
		if (s == '\n')
			break;
		i++;
	}
	printf("%s\n", str);
	return 0;
}
int* numberOfCases(char str[50][50], int length) {
	int result[] = { 0, 0 };
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < 50; j++) {
			if (str[i][j] >= 'a' && str[i][j] <= 'z')
				result[1]++;
			else if (str[i][j] >= 'A' && str[i][j] <= 'Z')
				result[0]++;
		}
	}
	return result;
}