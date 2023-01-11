// Ve trai tim bang dau *

#include<stdio.h>

int main(){
	int i,j;
	for( i = 1 ; i <= 2; i++){
	printf("   ");
	printf("* *"); }
	printf("\n * * * * * * *\n");
	for( i = 4; i >= 1; i--){
		for( j = 1; j <= 4 - i; j++ ){ printf("  ");
		}
		for( j = 1; j <= 2 * i -1; j++){ printf(" *");
		}
		printf("\n");
	}
	return 0;
	
}
