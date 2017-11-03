#include <stdio.h>
int main(){
    int i, count = 0;
    char sentence[1000];
    scanf("%[^\n]", sentence);
    char* forSentence = sentence;
    for (i = 0; i < 1000; i++){
        if (*(forSentence+i) == '\n')
            break;
        if (*(forSentence+i) == 'a')
            count++;
    }
    printf("%d\n", count);
    return 0;
}