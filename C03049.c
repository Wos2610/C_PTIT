#include<stdio.h>

void kTra(long long n){
	if(n % 2 == 0){
		printf("NO\n");
		return;
	}
	int countC = 0;
	int countL = 0;
	while(n > 0){
		int cs = n % 10;
		if(cs % 2 == 0){
			countC++;
		}
		else{
			countL++;
		}
		n /= 10;
	}
	if(countL <= countC){
		printf("NO\n");
		return;
	}
	printf("YES\n");
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		long long n;
		scanf("%lld", &n);
		kTra(n);
	}
}