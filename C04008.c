#include<stdio.h>

int a[1000000] = {0};
int b[1000000] = {0};
int main(){
	int T;
	scanf("%d", &T);
	int T1 = T;
	while(T--){
		int n, m, p;
		scanf("%d%d%d", &n, &m, &p);
		int i;
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(i = 0; i < m; i++){
			scanf("%d", &b[i]);
		}
		for(i = n + m - 1; i > p; i--){
			a[i] = a[i - m];
		}
		for(i = p; i < p + m; i++){
			a[i] = b[i - p];
		}
		printf("Test %d:\n", T1 - T );
		for(i = 0; i < n + m; i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}