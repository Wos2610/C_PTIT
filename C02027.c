#include<stdio.h>

void triangle(int n){
	int i, j;
	int begin1 = 0;
	int begin2 = 0;
	for(i = 1; i <= n; i++){
		if(i % 2 != 0){
			if( i == 1){
				printf("a");
				begin1 = 1;
			}
			else{
				begin1 = begin1 + i - 1 + i - 2;
				for(j = begin1; j <= begin1 + i - 1 ; j++){
					printf("%c ", j + 96);
				}
			}	
		} 
		else{
			begin2 = begin2 + i + i - 1;
			for(j = begin2; j >= begin2 - i + 1; j--){
				printf("%c ", j + 96);
			}
		}
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d", &n);
	triangle(n);
	return 0;
}