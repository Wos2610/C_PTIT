#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	long long sum = 1;
	int i;
	for(i = 2; i <= sqrt(n) ; i++){
		if(n % i == 0){
			if(i != (n / i)){
				sum = sum + i + n/i;
			}
			else{
				sum += i;
			}
		}
	}
	if(sum == n){
		printf("1");
	}
	else{
		printf("0");
	}
	return 0;
}