#include<stdio.h>

long long min(long long x){
	int s[20] = {0};
	int index = 0;
	while(x > 0){
		int cs = x % 10;
		x /= 10;
		if(cs == 6){
			s[index] = 5;
		}
		else{
			s[index] = cs;
		}
		index++;
	}
	long long res = 0;
	int i;
	for(i = index - 1; i >= 0; i--){
		res = res * 10 + s[i];
	}
	return res;
}

long long max(long long x){
	int s[20] = {0};
	int index = 0;
	while(x > 0){
		int cs = x % 10;
		x /= 10;
		if(cs == 5){
			s[index] = 6;
		}
		else{
			s[index] = cs;
		}
		index++;
	}
	long long res = 0;
	int i;
	for(i = index - 1; i >= 0; i--){
		res = res * 10 + s[i];
	}
	return res;
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		long long x1, x2;
		scanf("%lld%lld", &x1, &x2);
		printf("%lld %lld\n", min(x1) + min(x2), max(x1) + max(x2));
	}
}
