#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i,j;
	for(i = 1; i <= n; i++){
		int x = 1;
		for(j = 1; j <= i; j++){
			printf("%c", '@' - 1 + x);
			x += 2;
		}
		x -= 2;
		for(j = 1; j <= i - 1; j++){
			x -= 2;
			printf("%c", '@' - 1 + x);
		}
		printf("\n");
	}
}