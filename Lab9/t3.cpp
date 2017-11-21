#include <stdio.h>
#include <string.h>
int main(){
    char password[20], confirm[20];
    while(1){
        puts("Please set your password: ");
        scanf("%20s", password);
        printf("pass: %s\n", password);
        if (strlen(password) < 8){//Check if the length of password is proper
            puts("Password is not long enough.");
            continue;
        }
        int c;//Variable to judge if we need to flush buffer
        while((c = getchar()) != '\n' && c != EOF);//Flush buffer
        puts("Please confirm your password: ");
        scanf("%20s", confirm);
        printf("confirm: %s\n", confirm);
        if (strcmp(password, confirm) != 0){//Check if the second input is the same
            puts("Passwords don't match.");
            while((c = getchar()) != '\n' && c != EOF);//Flush buffer
            continue;
        }
        printf("Your password \"%s\" is confirmed.\n", confirm);
        break;
    }
    return 0;
}