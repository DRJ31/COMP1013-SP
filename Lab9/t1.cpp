#include <stdio.h>
#include <string.h>
int checkCharacterNumbers(char* str);//check how many words in input
bool checkLetter(char a);//Check if the character is a letter
int main(){
    char str[50];
    gets(str);
    printf("There are %d words in the line.\n", checkCharacterNumbers(str));
    return 0;
}
int checkCharacterNumbers(char str[]){
    int result = 0;//The number of spaces
    if (checkLetter(str[0]))
        result++;
    for (int i = 0; i < strlen(str); i++){
        if (str[i] == ' ' && checkLetter(str[i+1]))
            result++;
    }
    return result;
}
bool checkLetter(char a){
    return (a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A');
}