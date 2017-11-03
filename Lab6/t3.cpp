#include <stdio.h>
int main(){
    int count = 0;
    char check;
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