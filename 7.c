#include<stdio.h>

long long a[56][56];
long long b[56][56];


void tich(long long a[56][56], long long b[56][56], int n, int m){
	long long c[56][56] = {0};
	int i,j,k;
	for(i = 1; i <= m; i++){
		for(j = 1; j <= n; j++){
			b[i][j] = a[j][i];
		}
	}
//	for(i = 1; i <= m; i++){
//		for(j = 1; j <= n; j++){
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
	
	for(i = 1; i <= n; i++){
	 	for(j = 1; j <= n; j++){
	 		for(k = 1; k <= m; k++){
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
		int n, m;
		scanf("%d%d", &n, &m);
		int i,j;
		for(i = 1; i <= n; i++){
			for(j = 1; j <= m; j++){
				scanf("%lld", &a[i][j]);
			}
		}
		printf("Test %d:\n", T1 - T);
		tich(a, b, n, m);
	}
	return 0;
	
}