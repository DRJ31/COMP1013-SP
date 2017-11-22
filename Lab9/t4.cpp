#include <stdio.h>
#include <string.h>
bool isSubstring(char firstString[], char secondString[]);
int main(){
    char firstString[50], secondString[50];
    puts("Please input the first string: ");
    scanf("%s", firstString);
    puts("Please input the second string: ");
    scanf("%s", secondString);
    if (isSubstring(firstString, secondString))
        puts("The first string is a substring of the second.");
    else
        puts("The first string is not a substring of the second.");
    return 0;        
}
bool isSubstring(char firstString[], char secondString[]){
    if (strlen(firstString) > strlen(secondString))//Check if first string is longer than the second one
        return false;
    for (int i = 0; i < strlen(secondString); i++){//Check if first string is substring of the second one
        if (secondString[i] == firstString[0]){
            int j;
            for (j = 0; j < strlen(firstString); j++){
                if (secondString[i+j] != firstString[j])
                    break;
            }
            if (j == strlen(firstString))
                return true;
        }
    }
    return false;
}