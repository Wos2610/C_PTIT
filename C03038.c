#include<stdio.h>

#define M 100006;
unsigned long long f[100006];

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int N, p;
		scanf("%d%d", &N, &p);
		int i;
		int x = 0;
		for(int i = 2; i <= N; i++){
			int m= i;
			while(m % p == 0){
				x++;
				m /= p;
			}
		}
		printf("%d\n", x);
	}
}