#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i,j;
	for(i = 1; i <= a; i++){
		if(i > b){
			for(j = b; j >= 1; j--){
				printf("%c", 'A' + j - 1);
			}
		}
		else{
			for(j = 1 ; j <= b - i + 1; j++){
				printf("%c", 'A' + j + i - 1 - 1);
			}
			for(j = i - 1; j >= 1; j--){
				printf("%c", 'A' + j - 1 );
			}
		}
		printf("\n");
	}
}