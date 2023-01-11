#include<stdio.h>
#include<math.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int sub = abs(b - a);
	int max = 0;
	int i,j;
	if(a > b){
		for(i = 1; i <= sub; i++){
			for(j = 1; j <= b; j++){
				printf("%c", 'A' + b - 1);
			}
			printf("\n");
		}
		a = a - sub;
		sub = 0;
	}
	for(i = 1; i <= a; i++){
		for(j = 1 ; j <= sub + i - 1; j++){
			printf("%c", 'A' + j + a - i - 1);
		}
		for(j = 1; j <= a - i + 1 ; j++){
			printf("%c", 'A' + b - 1);
		}
		printf("\n");
	}
}