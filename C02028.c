#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i,j;
	int a = 1;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= 2*(n - i) + 1; j += 2){
			printf("%c", 'A' + a + j - 2);
		}
		a += 2;
		printf("\n");
	}
}