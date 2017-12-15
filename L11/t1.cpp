#include <stdio.h>
int fileCopy(char *destFileName, char *resFileName);
int main()
{
    char str1[20], str2[20];
    int flag;
    scanf("%s", str1); // read name of file (.txt) to be copied
    scanf("%s", str2); // read name of file (.txt) to copyto
    flag = fileCopy(str2, str1);
    if (flag == 1)
    printf("Success");
    else
    printf ("Failure");
    return 0;
}
int fileCopy(char *destFileName, char *resFileName){
    FILE *fp1 = fopen(resFileName, "r");
    FILE *fp2 = fopen(destFileName, "w+");
    char c;
    if (fp1 == NULL){
		fclose(fp1);
		fclose(fp2);
		return 0;
	}
    while((c = fgetc(fp1)) != EOF)
        fputc(c,fp2);
	fclose(fp1);
	fclose(fp2);
    return 1;
}
