#include <stdio.h>
const char* judge(int num);//function to judge if the character is a number or an English letter or something else according to ASCII code
int main()
{
	char a;
	puts("Please input a character: ");
	scanf("%c", &a);
	printf("%c is %s.\n", a, judge((int)a));
	return 0;
}
const char* judge(int num)
{
	if ((num >= 97 && num <= 122) || (num >= 65 && num <= 90))
		return "an English letter";
	else if (num >= 48 && num <= 57)
		return "a digit";
	else
		return "neither an English letter nor a digit";
}