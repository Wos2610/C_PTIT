#include<stdio.h>

int a[100][100];
int b[100][100];
int main(){
	int n,m;
	scanf("%d%d", &n, &m);
	int i,j;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			b[i][j] = a[j][i];
		}
	}
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}