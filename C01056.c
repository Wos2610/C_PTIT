#include<stdio.h>

int kTra(long long n){
	int cs1 = n % 10;
	int cs2 = 0;
	while(n > 0){
		cs2 = cs1;
		n /= 10;
		cs1 = n % 10;
		if(cs2 < cs1){
			return 0;
		}
	}
	return 1;
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		long long n;
		scanf("%lld", &n);
		if(kTra(n) == 0){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
	return 0;
}