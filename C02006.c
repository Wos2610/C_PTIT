#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i,j;
	for(i = 1; i <= a; i++){
		for(j = 1; j <= i - 1; j++){
			printf("~");
		}
		if(i == 1 || i == a){
			for(j = 1; j <= b; j++){
				printf("*");
			}
		}
		else{
			for(j = 1; j <= b; j++){
				if(j == 1 || j == b){
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