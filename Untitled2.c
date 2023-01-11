#include<stdio.h>

int a[100][100] = {0};
int sum[100] = {0};
int main(){
	int n;
	scanf("%d", &n);
	int sum1 = 0;
	int sum2 = 0;
	int i,j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(j == i){
				if(a[i][j] % 2 == 0){
					sum1 += a[i][j];
				}
			}
			if(j == n - i - 1){
				if(a[i][j] % 2 != 0){
					sum2 += a[i][j];
				}
			}
		}
	}
	printf("%d %d", sum1, sum2);
}