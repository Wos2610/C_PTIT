#include<stdio.h>

long long gt(int n){
	if(n <= 1){
		return 1;
	}
	return gt(n - 1)*n;
}
void pascalTriangel(int n){
	int i,j;
	for(i = 0; i < n; i++){
		for(j = 0; j <= i; j++){
			long long temp = gt(i)/(gt(j) * gt(i - j));
			printf("%lld ", temp);
		}
		printf("\n");
	}
}

int main(){
	int n;
	scanf("%d", &n);
	pascalTriangel(n);
	return 0;
}