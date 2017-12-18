#include <stdio.h>
#include <stdlib.h>
struct stuRec{
    char name[20];
    int id;
    char gender;
};
int main()
{
    struct stuRec *p;
    p = (struct stuRec*)malloc(sizeof(struct stuRec));
    if (p){
        printf("please input name, id and gender\n");
        scanf("%s%d%*c%c", p->name, &p->id, &p->gender);
        printf("name:%-10s,ID:%d,gender:%c\n", p->name,p->id,p->gender);
        free (p);
    }
    return 0;
}
/*
1. The memory dynamically allocated
2. %*c is used for ignore a char. In this function, it is use to ignore space between number and gender
3. %-10s means if the length of the string is less than 10, then use space to fill it. If it is changed to %10s, that means it will only scan 10 characters.
4. Because we should free the memory if we don't need to use it so that the memory can store other things
*/