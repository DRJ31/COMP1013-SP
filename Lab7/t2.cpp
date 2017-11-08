#include <stdio.h>
int main() {
	char inputString[50];
	int i;
	puts("Please input a lower-case English word: ");
	for (i = 0; i < 50; i++) {
		scanf("%c", &inputString[i]);
		if (inputString[i] == '\n' || inputString[i] == ' ')//check if the character is a lower-case English letter
			break;
	}
	for (int j = 0; j < i / 2; j++) {//check if it is a palindrome
		if (inputString[j] != inputString[i - 1 - j]) {
			puts("It's not a palindrome.");
			return 0;
		}
	}
	puts("It's a palindrome.");
	return 0;
}