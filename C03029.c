#include<stdio.h>

int isEvenNum(long long n){
	if(n % 2 == 0){
		return 1;
	}
	return 0;
}

int isEvenDigit(long long n){
	
	while(n > 0){
		int cs = n % 10;
		if(cs % 2 != 0){
			return 0;
		}
		n /= 10;
	}
	return 1;
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		long long n;
		scanf("%lld", &n);
		if( isEvenDigit(n)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	
	return 0;
}