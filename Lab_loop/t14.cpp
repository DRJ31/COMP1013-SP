#include <stdio.h>
int main(){
    int mycard = 3, guess;
    do{
        puts("Guess my card: ");
        scanf("%d", &guess);
        if (guess == mycard)
            puts("Good guess!");
        else
            puts("Try again.");
    }while(guess != mycard);
    return 0;
}