#include<stdio.h>
#include<math.h>

int thuanNghich(long long n){
	long long m = n;
	long long dao = 0;
	int sum = 0;
	int cs = 0;
	while(n > 0){
		cs = n % 10;
		dao = dao * 10 + cs;
		sum += cs;
		n /= 10;
	}
	if(dao == m && sum % 10 == 8){
		return 1;
	}
	return 0;
}

int cs6(long long n){
	int cs = 0;
	while(n > 0){
		cs = n % 10;
		if(cs == 6){
			return 1;
		}
		n /= 10;
	}
	return 0;
}

int main(){
	long long a,b;
	scanf("%lld%lld", &a, &b);
	if(a > b){
		long long tmp = b;
		b = a;
		a = tmp;
	}
	int count = 0;
	long long i;
	for(i = a; i <= b; i++){
		if(cs6(i) && thuanNghich(i)){
			printf("%lld ", i);
		}
	}
}
