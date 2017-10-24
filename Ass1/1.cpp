#include <stdio.h>
int main()
{
    int i = 0, j = 5;
    char ch;
    float f;
    scanf("%c", &ch);
    printf("the ASCII code of '%c' is %d\n", ch, ch);
    printf("the value of i is %d\n", i);
    i = ch;
    printf("the value of i is %d\n", i);
    return 0;
}
/*1. 
(1)There must be a int before main;
(2)In scanf the variable 'ch' must be '&ch';
(3)There must be a return 0 at the end of the program
(4)Lack of #include <stdio.h>
(5)Lack of ";" at the end of some expression.
2. There is still a warning that i is not initialized.
*/