#include<stdio.h>

long long a[1000006] = {0};
long long sum1 = 0, sum2 = -99999999;
void process(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%lld", &a[i]);
	}
	for(int i = 1; i <= n; i++){
		sum1 += a[i];
		if(sum1 < a[i]){
			sum1 = a[i];
		}
		if(sum1 > sum2){
			sum2 = sum1;
		}
	}
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		process();
		printf("%lld\n", sum2);
		sum1 = 0;
		sum2 = -99999999;
	}
}