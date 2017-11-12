#include <stdio.h>
int main() {
	int numMat[9];
	for (int i = 0; i < 9; i++)
		scanf("%d", &numMat[i]);
	printf("%d %d %d\n", numMat[0] + numMat[4] + numMat[8], numMat[2] + numMat[4] + numMat[6], numMat[4]);
	return 0;
}