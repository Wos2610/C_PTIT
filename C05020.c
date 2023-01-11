#include<stdio.h>

#define M 1000000
int a[100][100];
int f[1000006];

void fibo(){
	int i;
	f[0] = 0;
	f[1] = 1;
	for(i = 2; i <= M; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
}
int main(){
	fibo();
	int n;
	scanf("%d", &n);
	int rbegin = 1;
	int rend = n;
	int cbegin = 1;
	int cend = n;
	int i,j;
	int k = 0;
	while(rbegin <= (n + 1)/2 && cbegin <= (n + 1)/2){
		for(i = cbegin; i <= cend; i++){
		a[rbegin][i] = f[k];
		k++;
	}
	for(j = rbegin + 1; j <= rend; j++){
		a[j][cend] = f[k];
		k++;
	}
	for(i = cend - 1; i >= cbegin; i--){
		a[rend][i] = f[k];
		k++;
	}
	for(j = rend - 1; j >= rbegin + 1; j--){
		a[j][cbegin] = f[k];
		k++;
	}
	rbegin++;
	rend--;
	cbegin++;
	cend--;
	}
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	} 
}
