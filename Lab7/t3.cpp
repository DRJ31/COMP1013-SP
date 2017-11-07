#include <stdio.h>
char toLower(char a);//make letter lowercase
int main(){
    char inputString[50];
    int i, status = 1;//status is to check if it is a palindrome
    puts("Please input an English word: ");
    for (i = 0; i < 50; i++){
        scanf("%c", &inputString[i]);
        if (inputString[i] < 'a' || inputString[i] > 'z')//check if the character is a lower-case English letter
            break;
    }
    for (int j = 0; j < (i-1) / 2; j++){//check if it is a palindrome
        if (toLower(inputString[j]) != toLower(inputString[i-1-j])){
            status = 0;
            puts("It's not a palindrome.");
            break;
        }
    }
    if (status)
        puts("It's a palindrome.");
    return 0;
}
char toLower(char a){
    if (a >= 'A' && a <= 'Z')
        return a + 32;
    return a;
}