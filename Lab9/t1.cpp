#include <stdio.h>
#include <string.h>
int checkCharacterNumbers(char* str);//check how many words in input
int main(){
    char str[50];
    gets(str);
    printf("There are %d words in the line.\n", checkCharacterNumbers(str));
    return 0;
}
int checkCharacterNumbers(char str[]){
    int result = 0;//The number of spaces
    for (int i = 0; i < strlen(str); i++){
        if (str[i] == ' ')
            result++;
    }
    return result + 1;
}