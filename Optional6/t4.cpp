#include <stdio.h>
#include <string.h>
typedef struct
{
	char name[20];
	char major[50];
	double score;
} Student;
void bubbleSort(Student stu[], int length);
int main() {
	Student students[50];
	int i;
	for (i = 0; i < 50; i++) {//Input score=-1 to terminate
		scanf("%20s", students[i].name);
		scanf("%lf", &students[i].score);
		if (students[i].score == -1)
			break;
		scanf("%50s", students[i].major);
	}
	printf("Name\tScore\tMajor\n");
	for (int k = 0; k < sizeof(students) / sizeof(students[0]); k++)
		printf("%s\t%g\t%s\n", students[k].name, students[k].score, students[k].major);
	return 0;
}
void bubbleSort(Student stu[], int length) {
	int status;
	do {
		status = 0;
		for (int j = 1; j < length; j++) {
			if (strcmp(stu[j - 1].name, stu[j].name) > 0) {
				status++;
				Student tmp = stu[j - 1];
				stu[j - 1] = stu[j];
				stu[j] = tmp;
			}
		}
	} while (status != 0);
}