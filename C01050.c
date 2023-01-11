#include<stdio.h>

int main(){
	int b,a;
	scanf("%d%d", &b, &a);
	int i,j;
	for(i = 1; i <= a; i++){
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
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}