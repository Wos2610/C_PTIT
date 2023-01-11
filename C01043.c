#include<stdio.h>

int gt(int n){
	int i;
	int res = 1; 
	for(i = 2; i <= n; i++){
		res *= i;
	}
	return res;
}

int main(){
	int n;
	scanf("%d", &n);
	int m = n;
	int cs = 0;
	long long sum = 0;
	while(n > 0){
		cs = n % 10;
		sum += gt(cs);
		n /= 10;
	}
	if(sum == m){
		printf("1");
	}
	else{
		printf("0");
	}
	return 0;
}