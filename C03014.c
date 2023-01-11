#include<stdio.h>

long long ucln(long long a, long long b){
	while(a != 0){
		int x = a;
		a = b % a;
		b = x;
	}
	return b;
}


int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		long long a, b;
		scanf("%lld%lld", &a, &b);
		printf("%lld %lld\n", ( a * (b / ucln(a,b))), ucln(a, b) );
	}
	return 0;
}