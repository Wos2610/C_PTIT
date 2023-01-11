#include<stdio.h>

long long a[56][56] = {0};
long long b[56][56] = {0};
long long c[56][56] = {0};

void tich(long long a[56][56], long long b[56][56], int n){
	int i,j,k;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			b[i][j] = a[j][i];
		}
	}
	
	for(i = 1; i <= n; i++){
	 	for(j = 1; j <= n; j++){
	 		c[i][j] = 0;
	 		for(k = 1; k <= n; k++){
	 			c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			printf("%lld ", c[i][j]);
		}
		printf("\n");
	}
}


int main(){
	int T;
	scanf("%d", &T);
	int T1 = T;
	while(T--){
		int n;
		scanf("%d", &n);
		int i,j;
		for(i = 1; i <= n; i++){
			for(j = 1; j <= i; j++){
				a[i][j] = j;
			}
		}
		printf("Test %d:\n", T1 - T);
		tich(a, b, n);
	}
	return 0;
	
}