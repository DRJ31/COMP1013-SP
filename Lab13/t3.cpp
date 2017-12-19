#include <stdio.h>
#include <time.h>
#include <stdlib.h>
char randomChar(int seed); //Generate random character in upper case and lower case letters and numbers
char *generateChar(int length);//Generate char according to length
int main(){
    int length;
    char judge;//Read user's input to judge if he or she has chosen the password
    FILE *fp = fopen("passwd.txt", "w+");//File pointer of passwd.txt
    puts("What is the length of your password?");
    scanf("%d", &length);
    length++;
    char *passwd = (char *)malloc(length * sizeof(char));
    while (true){
        passwd = generateChar(length);
        printf("Password suggestion: %s\n", passwd);
        puts("Use this password?[Y/n]");
        scanf("%*c%c", &judge);
        if (judge == 'Y' || judge == 'y' || judge == '\n')
            break;
    }
    fputs(passwd, fp);
    fclose(fp);
    printf("The following password is saved in passwd.txt: %s\n", passwd);
    free(passwd);
    return 0;
}
char randomChar(int seed){
    char elements[62];//Array to store possible letters and numbers
    int i;
    for (i = 0; i < 10; i++){
        elements[i] = '0' + i;
    }
    while (i < 36) {
        elements[i] = 'A' + i - 10;
        i++;
    }
    while (i < 62) {
        elements[i] = 'a' + i - 36;
        i++;
    }
    srand(seed * time(0));
    return elements[rand() % 62];
}
char *generateChar(int length){
    char *result = (char *)malloc(length * sizeof(char));
    for (int i = 0; i < length; i++){
        *(result + i) = randomChar(i+1);
    }
    return result;
}
