#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i,j;
	for(i = 1; i <= a; i++){
		for(j = 1; j <= i - 1; j++){
			printf("~");
		}
		for(j = 1; j <= b; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}