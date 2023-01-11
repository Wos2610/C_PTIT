#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i,j;
	for(i = 1; i <= n; i++){
		for(j = n - i; j >= 1; j--){
			printf("~");
		}
		if(i == 1 || i == n){
			for(j = 1; j <= n; j++){
				printf("*");
			}
		}
		else{
			for(j = 1; j <= n; j++){
				if(j == 1 || j == n){
					printf("*");
				}
				else{
					printf(".");
				}
			}
		}
		printf("\n");
	}
	return 0;
}