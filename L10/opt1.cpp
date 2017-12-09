#include <stdio.h>
#include <string.h>
int occurrence1(char *sub, char *str);
int occurrence2(char *sub, char *str);
int main() {
	char str1[20], str2[80];
	scanf("%s %s", str1, str2);
	printf("%d\n", occurrence1(str1, str2));
	printf("%d\n", occurrence2(str1, str2));
	return 0;
}
int occurrence1(char *sub, char *str) {
	if (*str == '\0')
		return 0;
	else if (*sub != *str)
		return occurrence1(sub, (str + 1));
	else {
		char tmp[20];
		memcpy(tmp, str, strlen(sub));
		tmp[strlen(sub)] = '\0';
		if (strcmp(sub, tmp) == 0)
			return occurrence1(sub, (str + 1)) + 1;
		else
			return occurrence1(sub, (str + 1));
	}
}
int occurrence2(char *sub, char *str) {
	int result = 0, length = strlen(str);
	for (int i = 0; i < length; i++) {
		if (*sub == *str) {
			char tmp[20];
			memcpy(tmp, str, strlen(sub));
			tmp[strlen(sub)] = '\0';
			if (strcmp(sub, tmp) == 0)
				result++;
		}
		*str++;
	}
	return result;
}