#include <stdio.h>
int main(){
    char filename[100];//String to record the path of the file
    int lines = 0;//Count how many lines in this file
    puts("Please input the name of the file: ");
    scanf("%s", filename);
    FILE *fp = fopen(filename, "r");//The file pointer of inputed filename
    while (fgets(filename, 100, fp) != NULL)
        lines++;
    fclose(fp);
    printf("There are %d lines in the file.\n", lines);
    return 0;
}