#include<stdio.h>

long long c[56][56];

void chuyen(long long c[56][56], int m, int n, int a, int b){
	long long d[56][56];
	int i,j,k;
	for(i = 1; i <= m; i++){
		for(j = 1; j <= n; j++){
			d[i][j] = c[i][j]; 
		}
	}
	for(i = 1; i <= n; i++){
		if(i == a){
			for(j = 1; j <= n; j++){
				if(j == b){
					for(k = 1; k <= m; k++){
						d[k][i] = c[k][j];
					}
				}
			}
		}
		else if(i == b){
			for(j = 1; j <= n; j++){
				if(j == a){
					for(k = 1; k <= m; k++){
						d[k][i] = c[k][j];
					}
				}
			}
		}
	}
	for(i = 1; i <= m; i++){
		for(j = 1; j <= n; j++){
			printf("%lld ", d[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	int i,j;
	for(i = 1; i <= m; i++){
		for(j = 1; j <= n; j++){
			scanf("%lld", &c[i][j]);
		}
	}
	int a,b;
	scanf("%d%d", &a, &b);
	chuyen(c, m, n, a, b);
	return 0;
	
}