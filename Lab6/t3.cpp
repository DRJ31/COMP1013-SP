#include <stdio.h>
int main(){
    int count = 0;//the number of a.
    char check;//variable of every character
    while(true){
        scanf("%c", &check);
        if (check == '\n')
            break;
        if (check == 'a')
            count++;
    }
    printf("%d\n", count);
    return 0;
}