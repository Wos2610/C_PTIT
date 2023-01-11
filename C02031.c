#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i,j;
	int a = 1;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n - i + 1; j++){
			printf("%c", 'A' + n + j - i - 2);
		}
		printf("\n");
	}
}