#include <stdio.h>
int main(){
	int a, b;
	printf("Please input 2 intergers: \n");
	scanf("%d%d", &a, &b);
	if(a > b){
		printf("%d\n", a);
	}
	else if(a < b){
		printf("%d\n", b);
	}
	else{
		printf("a = b\n");
	}
}
