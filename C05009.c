#include<stdio.h>

long long a[56][56];
long long b[56][56];
long long c[56][56];
long long sumH[1000006] = {0};
long long sumC[1000006] = {0};

void chuyenCheo(long long a[56][56], int m){
	int i,j;
	for(i = 1; i <= m/2; i++){
		for(j = 1; j <= m; j++){
			if(j == i){
				b[i][j] = a[i][m - j + 1];
			}
			else if(j == (m - i + 1)){
				b[i][j] = a[i][m - j + 1];
			}
			else{
				b[i][j] = a[i][j];
			}
		}
	}
	for(i = m/2 + 1; i <= m; i++){
		for(j = 1; j <= m; j++){
			if(j == (m - i + 1)){
				b[i][j] = a[i][m - j + 1];
			}
			else if(j == i){
				b[i][j] = a[i][m - j + 1];
			}
			else{
				b[i][j] = a[i][j];
			}
		}
	}
	for(i = 1; i <= m; i++){
		for(j = 1; j <= m; j++){
			printf("%lld ",b[i][j]);
		}
		printf("\n");
	}
	
}
int main(){
	int m;
	scanf("%d", &m);
	int i,j;
	for(i = 1; i <= m; i++){
		for(j = 1; j <= m; j++){
			scanf("%lld", &a[i][j]);
		}
	}
	chuyenCheo(a, m);
	return 0;
	
}