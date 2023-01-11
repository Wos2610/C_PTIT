#include<stdio.h>

long long a[100][100];
long long b[100][100];
long long c[100][100];
void nhan(long long a[100][100],long long b[100][100], long long c[100][100], int m, int n, int p, int q){
	long long res1[100][100];
	long long res2[100][100];
	int i,j,k;
	for(i = 1; i <= m; i++){
		for(j = 1; j <= p; j++){
			res1[i][j] = 0;
			for(k = 1; k <= n ; k++){
				res1[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for(i = 1; i <= m; i++){
		for(j = 1; j <= q; j++){
			res2[i][j] = 0;
			for(k = 1; k <= p ; k++){
				res2[i][j] += res1[i][k] * c[k][j];
			}
		}
	}
	for(i = 1; i <= m; i++){
		for(j = 1; j <= q; j++){
			printf("%lld ", res2[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int m, n, p, q;
	scanf("%d%d%d%d", &m, &n, &p, &q);
	int i,j;
	for(i = 1; i <= m; i++){
		for(j = 1; j <= n; j++){
			scanf("%lld", &a[i][j]);
		}
	}
	for(i = 1; i <= n; i++){
		for(j = 1; j <= p; j++){
			scanf("%lld", &b[i][j]);
		}
	}
	for(i = 1; i <= p; i++){
		for(j = 1; j <= q; j++){
			scanf("%lld", &c[i][j]);
		}
	}
	nhan(a, b, c, m, n, p, q);
	return 0;
}