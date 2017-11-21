#include <stdio.h>
#include <string.h>
void checkLetter(char a);//Check if the character is an English letter
int main(){
    char str[50];
    puts("Please input a string: ");
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
        checkLetter(str[i]);
    puts("");
    return 0;
}
void checkLetter(char a){
    if (('a' <= a && a <= 'z') || ('A' <= a && a <= 'Z'))
        printf("%c", a);
}