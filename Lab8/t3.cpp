#include <stdio.h>
int StringCompare(char a[], char b[]);//compare if the 2 strings are the same
int main(){
    char firstString[20], secondString[20];
    puts("Please input the first string: ");
    scanf("%s", firstString);
    puts("Please input the second string: ");
    scanf("%s", secondString);
    if (StringCompare(firstString, secondString)){
        puts("The two strings are the same.");
        return 0;
    }
    puts("The two strings are not the same.");
    return 0;
}
int StringCompare(char a[], char b[]){
    int i = 0;
    while (a[i] != '\0' || b[i] != '\0'){//compare two strings
        if (a[i] != b[i])
            return 0;
        i++;
    }
    return 1;
}