#include <stdio.h>
#include <string.h>
int main(){
    int i;
    char str[50];
    while (strcmp(str, "End")){
        scanf("%s", str);
        i++;
    }
    printf("There are totally %d words in the sentence.\n", i);
    return 0;
}