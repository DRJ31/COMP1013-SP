#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 97
int main(){
    int length;
    printf("How long do you want the random string be: ");
    scanf("%d", &length);
    char *randstr = (char *)malloc(length * sizeof(char));
    srand(time(0));
    for (int i = 0; i < length; i++)
        *(randstr+i) = MIN + rand() % 27;
    puts(randstr);
    return 0;
}