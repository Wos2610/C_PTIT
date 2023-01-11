#include<stdio.h>
#include<math.h>

int thuanNghich(long long n){
	long long m = n;
	long long dao = 0;
	int cs = 0;
	int sum = 0;
	while(n > 0){
		cs = n % 10;
		dao = dao * 10 + cs;
		sum += cs;
		n /= 10;
	}
	if(dao == m && sum % 10 == 0){
		return 1;
	}
	return 0;
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		long long begin = pow(10,n - 1);
		long long end = pow(10, n) - 1;
		int count = 0;
		int i;
		for(i = begin; i <= end; i++){
			if(thuanNghich(i)){
				count++;
			}
		}
		printf("%d\n", count);
	}
	
}