#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i,j;
	for(i = 1; i <= a; i++){
		if(i > b){
			for(j = i; j > i - b; j--){
				printf("%d", j);
			}
		}
		else{
			for(j = 1 ; j <= b - i + 1; j++){
				printf("%d", j + i - 1);
			}
			for(j = 1; j <= i - 1; j++){
				printf("%d", b - j );
			}
		}
		printf("\n");
	}
}