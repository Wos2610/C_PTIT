#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i,j;
	for(i = 1; i <= n; i++){
		int x = i;
		for(j = 1; j <= i; j++){
			printf("%c ", 'A' + j + x - 2);
			x += n - j - 1;
		}
		printf("\n");
	}
}