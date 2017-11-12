#include <stdio.h>
int main(){
    char str[50];
    int i;
    scanf("%s", str);
    for (i = 0; i < 50; i++){
        if (str[i] == '\0')
            break;
    }
    printf("%d\n", i);
    return 0;
}