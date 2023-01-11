#include<stdio.h>

int a[100][100];

int main(){
	int T;
	scanf("%d", &T);
	int T1 = T;
	while(T--){
		int n,m;
		scanf("%d%d", &n, &m);
		int i,j;
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		
		printf("Test %d:\n", T1 - T);
		
		for(i = 1; i < m; i++){
			for(j = 1; j < n; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	
	return 0;
}