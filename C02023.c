#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i, j, k;
	int tmp;
	if(a > b){
		tmp = a;
	}
	else{
		tmp = b;
	}
	for(i = 1; i <= a; i++){
		for(j = 1; j <= b; j++){
			if(j >= i){
				printf("%c", 96 + tmp - i + 1) ;
			}
			else{
				printf("%c", 96 + tmp - j + 1);
			}
		}
		printf("\n");
	}
}