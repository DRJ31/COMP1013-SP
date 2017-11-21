#include <stdio.h>
#include <string.h>
int length(char str[]);//The length of the first word
int main(){
    char str[50], result[50];
    gets(str);
    printf("The first word is: %s\n", memcpy(result, str, length(str)));
    return 0;
}
int length(char str[]){
    int i;
    for (i = 0; i < strlen(str); i++){
        if (str[i] == ' ')
            break;
    }
    return i + 1;
}