#include<stdio.h>
#include<string.h>

char str[1000006] = "";
int main(){
	gets(str);
	int n = strlen(str);
	printf("%d", n - 1);
	return 0;
}