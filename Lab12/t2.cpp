#include <stdio.h>
typedef struct {
    char name[20];
    int id;
    double gpa;
} Student;
bool checkID(Student list[], int listLength, Student *newstud);//Check if the ID is existed
bool checkGPA(Student *newstud);//Check if the GPA is valid
int main(){
    Student stus[20]; //The array to store students' information
    int serial; //The serial number of input students
    for (serial = 0; serial < 20; serial++){
        printf("Please input record #%d (Name, ID, GPA):\n", serial + 1);
        scanf("%s %d %lf", stus[serial].name, &stus[serial].id, &stus[serial].gpa);
        if (!checkID(stus, serial, &stus[serial])){
            puts("Error: Student ID already exists.");
            serial--;
            continue;
        }
        if (!checkGPA(&stus[serial])){
            puts("Error: Invalid GPA.");
            serial--;
            continue;
        }
        if (stus[serial].id == 0)
            break;
    }
    puts("Input completes.");
    puts("Name\tID\tGPA");
    for (int i = 0; i < serial; i++)
        printf("%s\t%d\t%g\n", stus[i].name, stus[i].id, stus[i].gpa);
    return 0;
}
bool checkGPA(Student *newstud){
    if (newstud->gpa < 0 || newstud->gpa > 4)
        return false;
    return true;
}
bool checkID(Student list[], int listLength, Student *newstud){
    for (int i = 0; i < listLength; i++){
        if (list[i].id == newstud->id)
            return false;
    }
    return true;
}