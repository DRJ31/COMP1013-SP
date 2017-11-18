#include <stdio.h>
#include <string.h>
char* reversedStr(char str[][100], int length);
char result[1000] = "";
int main() {
	char str[100][100];
	int i;
	for (i = 0; i < 1000; i++) {
		scanf("%s", str[i]);
		char judge = getchar();
		if (judge == '\n')
			break;
	}
	printf("%s\n", reversedStr(str, i));
	return 0;
}
char* reversedStr(char str[][100], int length) {
	for (int i = length; i >= 0; i--) {
		for (int j = 0; j < strlen(str[i]) / 2; j++) {
			char tmp = str[i][j];
			str[i][j] = str[i][strlen(str[i]) - 1 - j];
			str[i][strlen(str[i]) - 1 - j] = tmp;
		}
		strcat(result, str[i]);
		strcat(result, " ");
	}
	return result;
}