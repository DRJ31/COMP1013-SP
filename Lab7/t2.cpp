#include <stdio.h>
int main() {
	char inputString[50];
	int i;
	puts("Please input a lower-case English word: ");
	for (i = 0; i < 50; i++) {
		scanf("%c", &inputString[i]);
		if (inputString[i] == '\n' || inputString[i] == ' ')//break while it is not a word but a sentence
			break;
		if (!(inputString[i] <= 'z' && inputString[i] >= 'a')){//check if input is a lower-case English word
			puts("Please input a lower-case English word!");
			return -1;
		}
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