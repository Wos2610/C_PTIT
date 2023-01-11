#include<stdio.h>

long long a[56][56];

int mark[1000006] = {0};

void isPrime(){
	mark[0] = mark[1] = -1;
	int i,j;
	for(i = 2; i * i <= 1000000; i++){
		if(mark[i] == 0){
			for(j = i * i; j <= 1000000; j += i){
				mark[j] = -1;
			}
		}
	}
}
void tong(long long a[56][56], int n){
	isPrime();
	int i, j;
	long long sum = 0;
	for(i = 1; i <= n; i++){
		for(j = i; j <= n; j++){
			if(mark[a[i][j]] == 0){
				sum += a[i][j];
			}
		}
	}
	printf("%lld", sum);
}



int main(){
	int n;
	scanf("%d", &n);
	int i,j;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			scanf("%lld", &a[i][j]);
		}
	}
	tong(a, n);
	return 0;
	
}