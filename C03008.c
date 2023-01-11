#include<stdio.h>

int kTra(int n){
	long long sum = 1;
	int i;
	for(i = 2; i*i <= n; i++){
		if(n % i == 0){
			if(i != (n/i)){
				sum += i + n/i;
			}
			else{
				sum += i;
			}
		}
	}
	if(sum == n){
		return 1;	
	}
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	int i;
	for(i = 6; i < n; i++){
		if(kTra(i)){
			printf("%d ", i);
		}
	}
	return 0;
}