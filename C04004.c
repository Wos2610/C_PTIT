#include<stdio.h>

long long a[1000000] = {0};
long long fibo(int n){
	a[1] = 1;
	a[2] = 1;
	int i;
	for(i = 3; i <= n; i++){
		a[i] = a[i - 1] + a[i - 2];
	}
	return a[n];
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		printf("%lld", fibo(n));
		printf("\n");
	}
	return 0;
}