#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i,j;
	for(i = 1; i <= a; i++){
		if(i > b){
			for(j = b; j >= 1; j--){
				printf("%c", 'A' + b - 2);
			}
		}
		else{
			for(j = 1 ; j <= b - i + 1; j++){
				printf("%c", '@' + i + j - 2 );
			}
			for(j = 1; j < i; j++){
				printf("%c", 'A' + b - 2);
			}
		}
		printf("\n");
	}
}