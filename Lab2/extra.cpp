#include <stdio.h>
int main(){
	char letter;
	printf("Please input an English letter: \n");
	scanf("%c", &letter);
	printf("\"%c\" and its neighbours in ASCII: \n", letter);
	printf("%d\t%d\t%d\n", letter-1, letter, letter+1);
	printf("%c\t%c\t%c\n", letter-1, letter, letter+1);
	return 0;
}
