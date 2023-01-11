#include<stdio.h>

long long gt(int n){
	int i;
	long long res = 1;
	for(i = 2; i <= n; i++){
		res *= i;
	}
	return res;
}

int isStrong(int n){
	int m = n;
	int i;
	int cs = 0;
	long long sum = 0;
	while(n > 0){
		cs = n % 10;
		n /= 10;
		sum += gt(cs);
	}
	if(sum == m){
		return 1;
	}
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	int i;
	for(i = 1; i < n; i++){
		if( isStrong(i) ){
			printf("%d ", i);
		}
	}
	return 0;
}