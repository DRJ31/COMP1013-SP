#include <stdio.h>
int stringCompare(char s1[], char s2[]);
int main(){
    char str1[50], str2[50];
    puts("Please input the first string: ");
    fgets(str1, 50, stdin);
    puts("Please input the second string: ");
    fgets(str2, 50, stdin);
    printf("The comparison result of stringCompare is %d.\n", stringCompare(str1, str2));
    return 0;
}
int stringCompare(char s1[], char s2[]){
    int i = 0;
    while (s1[i] != '\0' || s2[i] != '\0'){
        if (s1[i] != s2[i]){
            if (s1[i] > s2[i])
                return 1;
            else
                return -1;
        }
        i++;
    }
    return 0;
}