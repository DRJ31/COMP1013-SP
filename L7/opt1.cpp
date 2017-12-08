#include <stdio.h>
#include <string.h>
char* inversedChar(char str[100][100], int length);
char result[1000] = "";
int main(){
    char str[100][100];
    int i = 0;
    do{
        scanf("%s", str[i]);
        i++;
    }while (strcmp(str[i-1], "End"));
    printf("%s\n", inversedChar(str, i-1));
    return 0;
}
char* inversedChar(char str[100][100], int length){
    for (int i = length - 1; i >= 0; i--){
        for (int j = 0; j < strlen(str[i]) / 2; j++){
            char tmp = str[i][j];
            str[i][j] = str[i][strlen(str[i])-j-1];
            str[i][strlen(str[i])-j-1] = tmp;
        }
        strcat(result, str[i]);
        strcat(result, " ");
    }
    return result;
}