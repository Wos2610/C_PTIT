#include<stdio.h>

long long fibo(int n){
	if(n == 1){
		return 0;
	}
	if(n == 2 ){
		return 1;
	}
	return fibo(n - 1) + fibo(n - 2);
}

int main(){
	int n;
	scanf("%d", &n);
	int i;
	for(i = 1; i <= n; i++){
		printf("%lld ", fibo(i));
	}
	
	return 0;
}