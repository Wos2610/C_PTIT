#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i,j;
	if(a > b){
		int sub = a - b;
		for(i = 1; i <= sub; i++){
			for(j = a - i + 1; j >= b - i; j--){
				printf("%d", j);
			}
			printf("\n");
		}
		a = a - sub;
	}
	for(i = 1; i <= a ; i++){
		for(j = b - i + 1; j >= 1; j--){
			printf("%d", j );
		}
		for(j = 2 ; j <= i  ; j++){
			printf("%d", j );
		}
		printf("\n");
	}
}