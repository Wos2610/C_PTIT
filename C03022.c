#include<stdio.h>


int mark[100006] = {0};

void sieve(int n){
	mark[0] = mark[1] = -1;
	int i,j;
	for(i = 2; i * i <= n; i++){
		if(mark[i] == 0){
			for(j = i * i; j <= n; j += i){
				mark[j] = -1;
			}
		}
	}
}

int tongCS(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	if(sum % 5 == 0){
		return 1;
	}
	return 0;
}

void check(int n){
	int count = 0;
	int i;
	for(i = 2; i <= n; i++){
		if(mark[i] == 0 && tongCS(i)){
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d", count);
}

int main(){
	int n;
	scanf("%d", &n);
	sieve(n);
	check(n);
	return 0;
}