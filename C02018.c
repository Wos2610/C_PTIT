#include<stdio.h>
#include<math.h>

void triangle(int n){
	int i,j;
	for(i = 1; i <= n; i++){ 
		for(j = 1; j <= n - i; j++){
			printf("~");
		}
		int tmp = 1;
		for(j = -i + 1; j <= i - 1; j++){
			printf("%d", 2*(i- abs(j) - 1) + 1);
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