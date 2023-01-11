#include<stdio.h>

long long pTNgTo(int n){
	int save[100000] = {0};
	int count[100000] = {0};
	long long sum = 0;
	int i;
	int index = -1;
	for(i = 2; i * i <= n; i++){
		if(n % i == 0){
			index++;
		}
		while(n % i == 0){
			sum += i;
			n /= i;
		}
	}
	if(n != 1){
		sum += n;
	}
	return sum;
}

int main(){
	int n;
	scanf("%d", &n);
	long long sum = 0;
	int i;
	for(i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		sum += pTNgTo(x);
	}
	printf("%lld", sum);
	return 0;
}