#include<stdio.h>

long long fibo(int n){
	if(n == 0){
		return 0;
	}
	if(n == 1 || n == 2){
		return 1;
	}
	return fibo(n - 1) + fibo(n - 2);
}

int main(){
	long long n;
	scanf("%lld", &n);
	printf("%lld", fibo(n));
	return 0;
}