#include<stdio.h>
#include<math.h>

void triangle(int n){
	int i,j;
	int a = 0;
	for(i = 1; i <= n; i++){ 
		int tmp = 0;
		a = i;
		for(j = 1; j <= i; j++){
			printf("%d ", a);
			tmp = n - j;
			a += tmp;
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