#include<stdio.h>

int kTra(int n){
	if(n == 1){
		return 0;
	}
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
	int a,b;
	scanf("%d%d", &a, &b);
	if(a > b){
		int temp = b; 
		b = a; 
		a = temp;
	}
	
	int i;
	for(i = a; i <= b; i++){
		if(kTra(i)){
			printf("%d ", i);
		}
	}
	return 0;
}