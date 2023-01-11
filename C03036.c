#include<stdio.h>

int thuanNghich(long long n){
	long long dao = 0;
	long long m = n;
	while(n > 0){
		dao = dao * 10 + n % 10;
		n /= 10;
	}
	if(m == dao){
		return 1;
	}
	return 0;
}

int isOddDigit(long long n){
	int cs = 0;
	int sum = 0;
	while(n > 0){
		cs = n % 10;
		if(cs % 2 == 0){
			return 0;
		}
		sum += cs;
		n /= 10;
	}
	if(sum % 2 == 0){
		return 0;
	}
	return 1;
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		long long n;
		scanf("%lld", &n);
		if(thuanNghich(n) && isOddDigit(n)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}