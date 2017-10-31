#include <stdio.h>
int main() {
	int i, j;
	for (i = 1; i <= 7; i++) {
		for (j = 0; j < i; j++) {
			if (i % 2)
				printf("# ");
			else
				printf("+ ");
		}
		puts("");
	}
	for (i = 6; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (i % 2)
				printf("# ");
			else
				printf("+ ");
		}
		puts("");
	}
	return 0;
}