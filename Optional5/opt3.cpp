#include <stdio.h>
#include <string.h>
void bubbleSort(char str[20][20], int length);
int main(){
    char str[20][20];
    char check;
    int i;
    puts("Please input words: ");
    for (i = 0; i < 20; i++){
        scanf("%s", str[i]);
        check = getchar();
        if (check == '\n')
            break;
    }
    bubbleSort(str, i+1);
    for (int j = 0; j <= i; j++)
        printf("%s ", str[j]);
    puts("");
    return 0;
}
void bubbleSort(char str[20][20], int length){
    int status;
    do{
        status = 0;
        for (int i = 1; i < length; i++){
            if (strcmp(str[i-1], str[i]) > 0){
                char tmp[20];
                strcpy(tmp, str[i-1]);
                strcpy(str[i-1], str[i]);
                strcpy(str[i], tmp);
            }
        }
    }while (status != 0);
}