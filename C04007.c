#include<stdio.h>

int a[1000000] = {0};
int b[1000000] = {0};
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < m; i++){
		scanf("%d", &b[i]);
	}
	int k;
	scanf("%d", &k);
	for(i = n + m - 1; i > k; i--){
		a[i] = a[i - m];
	}
	for(i = k; i < k + m; i++){
		a[i] = b[i - k];
	}
	for(i = 0; i < n + m; i++){
		printf("%d ", a[i]);
	}
	
}