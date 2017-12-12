#include <stdio.h>
#include <string.h>
int compare(void *p, void *q, int dataType);//Compare the value of two pointers
int main(){
    int i = 1, j = 1;
    printf("%d\n", compare(&i, &j, 0));
    double x = 1.22, y = 1.21;
    printf("%d\n", compare(&x, &y, 1));
    char a[] = "Baby", b[] = "Dragon";
    printf("%d\n", compare(a, b, 2));
    return 0;
}
int compare(void *p, void *q, int dataType){
    switch (dataType){
        case 0:
        {
            int *p1 = (int *)p, *q1 = (int *)q;//Change the pointer's type into int
            if (*p1 == *q1)
                return 0;
            else if (*p1 < *q1)
                return -1;
            else
                return 1;          
            break;
        }
        case 1:
        {
            double *p2 = (double *)p, *q2 = (double *)q;//Change the pointer's type into double
            if (*p2 == *q2)
                return 0;
            else if (*p2 < *q2)
                return -1;
            else
                return 1;          
            break;
        }
        case 2:
        {
            char *p3 = (char *)p, *q3 = (char *)q;//Change the pointer's type into char* (String)
            if (*p3 == *q3)
                return 0;
            else if (*p3 < *q3)
                return -1;
            else
                return 1;          
            break;
        }
        default:
            return 0;          
    }
}