#include <stdio.h>
char toLower(char a);//Make English letters in their lower case
int checkInput(char a);//check if input is an English word
int main() {
	char inputString[50];
	int i;
	puts("Please input an English word: ");
	for (i = 0; i < 50; i++) {
		scanf("%c", &inputString[i]);
		if (inputString[i] == '\n' || inputString[i] == ' ')//break while it is not a word but a sentence
			break;
		if (!checkInput(inputString[i])){
			puts("Please input an English word!");
			return -1;
		}
	}
	for (int j = 0; j < i / 2; j++) {//check if it is a palindrome
		if (toLower(inputString[j]) != toLower(inputString[i - 1 - j])) {
			puts("It's not a palindrome.");
			return 0;
		}
	}
	puts("It's a palindrome.");
	return 0;
}
char toLower(char a) {
	if (a >= 'A' && a <= 'Z')
		return a + 32;
	return a;
}
int checkInput(char a){
	return (a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A');
}