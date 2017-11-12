#include <stdio.h>
double* distance(double height, int times);
int main() {
	double height;
	int times;
	scanf("%lf%d", &height, &times);
	double *result;
	result = distance(height, times);
	printf("%.2f %.2f\n", *(result + 1), *result);
	return 0;
}
double* distance(double height, int times) {
	double result = -height;
	double* tmp = new double[2];
	for (int i = 0; i < times; i++)
	{
		result += height * 2;
		height /= 2;
	}
	tmp[0] = result;
	tmp[1] = height;
	return tmp;
}