#include <stdio.h>
#include <string.h>
int length(char str[], int begin);//The length of the first word
bool isLetter(char a);//Check if the character is a letter
int main(){
    char str[50], result[50];
    int begin;//The position of the first word
    gets(str);
    char* ptr = str;//Pointer of str
    for (int i = 0; i < strlen(str); i++){//Check where the word begin
        if (isLetter(str[i])){
            begin = i;
            break;            
        }
    }
    printf("The first word is: %s\n", memcpy(result, (ptr+begin), length(str, begin)));
    return 0;
}
int length(char str[], int begin){
    int i;
    for (i = begin; i < strlen(str); i++){
        if (str[i] == ' ')//Check where the first word end
            break;
    }
    return i + 1 - begin;
}
bool isLetter(char a){
    return (a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A');
}