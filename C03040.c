#include<stdio.h>

int tongCS(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

void kTra(int n){
	long long sum = 0;
	int m = n;
	int i;
	for(i = 2; i * i <= n; i++){
		while(n % i == 0){
			if(i < 10){
				sum += i;
			}
			else{
				sum += tongCS(i);
			}
			n /= i;
		}
	}
	if(n != 1){
		sum += tongCS(n);
	}
	if(sum == tongCS(m)){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}
int main(){
	int n;
	scanf("%d", &n);
	kTra(n);
	return 0;
}