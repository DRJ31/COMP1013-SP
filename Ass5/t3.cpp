#include <stdio.h>
typedef struct {
    char name[20];
    int score;
} Student;
void sort(Student stus[], int length);//Sort the students by score
int main(){
    FILE *fp1 = fopen("student.txt", "r");//File pointer of student.txt
    FILE *fp2 = fopen("sorted.txt", "w+");//File pointer of sorted.txt
    Student students[20];
    int i = 0;//Count number of students
    while (fscanf(fp1, "%s %d", students[i].name, &students[i].score) != EOF)
        i++;
    fclose(fp1);
    sort(students, i);
    for (int j = 0; j < i; j++)
        fprintf(fp2, "%s %d\n", students[j].name, students[j].score);
    fclose(fp2);
    return 0;
}
void sort(Student stus[], int length){//Using bubble sort
    int status;//Check if sort is over
    do {
        status = 0;
        for (int i = 1; i < length; i++){
            if (stus[i-1].score < stus[i].score){
                status++;
                Student tmp = stus[i];
                stus[i] = stus[i-1];
                stus[i-1] = tmp;
            }
        }
    } while (status != 0);
}