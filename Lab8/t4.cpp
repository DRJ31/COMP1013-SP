#include <stdio.h>
char a;//variable to store input characters temporary
void scanChar(){
    while(1){
        scanf("%c", &a);
        if ('0' > a || a > '9')
            break;
        printf("%c", a);
    }
    puts("");
}
int main(){
    scanChar();
    return 0;
}
