#include <stdio.h>
char* stringCopy(char *dest, char *res);
int main() {
	char str1[20], str2[20];
	scanf("%s", str1);
	stringCopy(str2, str1);
	puts(str2);
	return 0;
}
char* stringCopy(char *dest, char *res) {
    //Another way to solve this Problem
    // while ((*dest++ = *res++) != '\0');
	while (true){
		*dest = *res;
        if (*res == '\0')
            break;
        *dest++;
        *res++;
    }
	return dest;
}