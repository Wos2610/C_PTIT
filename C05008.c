#include<stdio.h>

long long c[56][56];
long long d[56][56];
long long e[56][56];
long long sumH[1000006] = {0};
long long sumC[1000006] = {0};

void xoaHang(long long c[56][56], int m, int n){
	int i,j;
	int maxH = 0;
	for(i = 1; i <= m; i++){
		sumH[i] = 0;
		for(j = 1; j <= n; j++){
			sumH[i] += c[i][j];
		}
		if(sumH[i] > maxH){
				maxH = sumH[i];
		}
	}
	int indexH = 0;
	for(i = 1; i <= m; i++){
		if(sumH[i] != maxH){
			indexH++;
			for(j = 1; j <= n; j++){
				d[indexH][j] = c[i][j];
			}
		}
	}
	
	int maxC = 0;
	int indexC = 0;
	for(j = 1; j <= n; j++){
		sumC[j] = 0;
		for(i = 1; i <= indexH; i++){
			sumC[j] += d[i][j];
		}
		if(sumC[j] > maxC){
			maxC = sumC[j];
		}
	}
	
	for(j = 1; j <= n; j++){
		if(sumC[j] != maxC){
			indexC++;
			for(i = 1; i <= indexH; i++){
				e[i][indexC] = d[i][j];
			}
		}
	}
	
	for(i = 1; i <= indexH; i++){
		for(j = 1; j <= indexC; j++){
			printf("%lld ", e[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int T;
	scanf("%d", &T);
	int T1 = T;
	while(T--){
		int m, n;
		scanf("%d%d", &m, &n);
		int i,j;
		for(i = 1; i <= m; i++){
			for(j = 1; j <= n; j++){
				scanf("%lld", &c[i][j]);
			}
		}
		printf("Test %d:\n", T1 - T);
		xoaHang(c, m, n);
	}
	
	return 0;
	
}