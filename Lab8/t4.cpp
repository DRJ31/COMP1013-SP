#include <stdio.h>
int main(){
    char a;//variable to store input characters temporary
    while(1){
        scanf("%c", &a);
        if ('0' > a || a > '9')
            break;
        printf("%c", a);
    }
    puts("");
    return 0;
}
