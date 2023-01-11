#include<stdio.h>

int a[1000][1000];

void process(){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			for(int p = i; p <= n; p++){
				for(int q = j; q <= m; q++){
					if(a[i][j] > a[p][q]){
						int temp = a[p][q];
						a[p][q] = a[i][j];
						a[i][j] = temp;
					}
				}
			}
		}
	}
	
	for(int i = 1; i<= n; i++){
		for(int j = 1; j <= m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int T;
	scanf("%d", &T);
	int T1 = T;
	while(T--){
		printf("Test %d:\n", T1 - T);
		process();
		printf("\n");
	}
}