#include <stdio.h>
int judgePrime(int a);
int main(){
    int num;
    do{
        printf("Please input a positive integer (input 0 to exit): ");
        scanf("%d", &num);
        if (num < 0){
            puts("Invalid input!");
            continue;
        }
        else if (num == 0){
            puts("Bye-bye!");
            break;
        }
        if (judgePrime(num))
            printf("%d is a prime.\n", num);
        else
        printf("%d is not a prime.\n", num);
    }while(true);
    return 0;
}
int judgePrime(int a){
    int i;
    if (a == 1)
        return 0;
    for (i = 2; i < a; i++){
        if (a % i == 0)
            return 0;
    }
    return 1;
}