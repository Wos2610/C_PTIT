#include<stdio.h>

#define M 1000000
int prime[1000006] = {0};
int save[1000006] = {0};


void sieve(){
	int i,j;
	for(int i = 2; i * i <= M; i++){
		if(prime[i] == 0){
			for(j = i * i; j <= M; j += i){
				if(prime[j] == 0){
					prime[j] = i;
				}
			}
		}
	}
	for(i = 2; i <= M; i++){
		if(prime[i] == 0){
			prime[i] = i;
		}
	}
}

long long factorize( int save[], long long n, int index ){
	int i;
	long long tmp = 0;
	for(i = 0; i <= index; i++){
		if(n % save[i] == 0){
			tmp = save[i];
			while(n % save[i] == 0){
				n /= save[i];
			}
		}
		if(n == 1){
			break;
		}
	}
	if(n != 1){
		tmp = n;
	}
	printf("%lld\n", tmp);
}

int main(){
	int T;
	scanf("%d", &T);
	sieve();
	int index = -1;
	int i;
	for(i = 2; i <= M; i++){
		if(prime[i] == i){
			index++;
			save[index] = i;
		}
	}
	while(T--){
		long long n;
		scanf("%lld", &n);
		factorize(save , n, index);
	}
	return 0;
}