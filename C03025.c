#include<stdio.h>

int isPrime(int n){
	if(n == 2){
		return 1;
	}
	if(n < 2 || n % 2 == 0){
		return 0;
	}
	int i;
	for(i = 3; i * i <= n; i += 2){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int check(int n){
	int sum = 0;
	while(n > 0){
		int cs = n % 10;
		if(cs != 2 && cs != 3 && cs != 5 && cs != 7){
			return 0;
		}
		sum += cs;
		n /= 10;
	}
	if(isPrime(sum)){
		return 1;
	}
	return 0;
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int a, b;
		scanf("%d%d", &a, &b);
		int count = 0;
		int i;
		for(i = a; i <= b; i++){
			if(isPrime(i)){
				if(check(i)){
					count++;
				}
			}
		}
		printf("%d\n", count);
	}
}