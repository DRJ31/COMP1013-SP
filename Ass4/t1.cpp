#include <stdio.h>
#include <string.h>
void toUpperCase(char str[], int pos);//Change the first character in a word to uppercase
int main() {
	char str[100];
    puts("Please input a sentence: ");
	fgets(str, 100, stdin);
	for (int i = 0; i < strlen(str); i++)
		toUpperCase(str, i);//Deal with characters in the string
	puts(str);
	return 0;
}
void toUpperCase(char str[], int pos) {
	if ((str[pos - 1] == ' ' || pos == 0) && str[pos] >= 'a' && str[pos] <= 'z')
		str[pos] -= 32;
}