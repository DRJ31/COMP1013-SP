#include <stdio.h>
int main()
{
	char gpa;//Character of GPA grade
	puts("Please input the GPA grade: ");
	scanf("%c", &gpa);
	switch (gpa)
	{
	case 'A':
	case 'a':
		puts("4.00");
		break;
	case 'B':
	case 'b':
		puts("3.00");
		break;
	case 'C':
	case 'c':
		puts("2.00");
		break;
	case 'D':
	case 'd':
		puts("1.00");
		break;
	case 'F':
	case 'f':
		puts("0.00");
		break;
	default:
		puts("Please input the correct GPA grade.");
		break;
	}
	return 0;
}