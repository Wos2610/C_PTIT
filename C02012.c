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
			for(j = i; j >= 1; j--){
				printf("%d", j );
			}
			for(j = 2 ; j <= b - i + 1 ; j++){
				printf("%d", j );
			}
		}
		printf("\n");
	}
}