#include <stdio.h>
#include <string.h>
typedef struct {
    char name[50], major[50];
    double score;
} Student;
void bubbleSort(Student stu[], int length);//Use bubbleSort to sort the array
int main(){
    Student stus[50];
    int i;
    puts("Please input student's name, score and major.");//Input with the order name, score and major.
    for (i = 0; i < 50; i++){
        scanf("%50s", stus[i].name);
        if (strcmp(stus[i].name, "end") == 0)//Break when the name of student is "end"
            break;
        scanf("%lf", &stus[i].score);
        scanf("%50s", stus[i].major);
    }
    bubbleSort(stus, i);
    printf("Name\tScore\tMajor\n");
    for (int j = 0; j < i; j++){
        printf("%s\t%g\t%s\n", stus[j].name, stus[j].score, stus[j].major);
    }
    return 0;
}
void bubbleSort(Student stu[], int length){
    int status;
    do {
        status = 0;
        for (int j = 1; j < length; j++){
            if (strcmp(stu[j-1].name, stu[j].name) > 0){
                status++;
                Student tmp = stu[j-1];
                stu[j-1] = stu[j];
                stu[j] = tmp;
            }
        }
    } while (status != 0);
}