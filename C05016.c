#include<stdio.h>

int a[100][100];
int main(){
	int n;
	scanf("%d", &n);
	int rbegin = 1;
	int rend = n;
	int cbegin = 1;
	int cend = n;
	int i,j;
	int x = 1;
	while(rbegin <= (n + 1)/2 && cbegin <= (n + 1)/2){
		for(i = cbegin; i <= cend; i++){
			a[rbegin][i] = x;
			x++;
		}
		for(j = rbegin + 1; j <= rend; j++){
			a[j][cend] = x;
			x++;
		}
		for(i = cend - 1; i >= cbegin; i--){
			a[rend][i] = x;
			x++;
		}
		for(j = rend - 1; j >= rbegin + 1; j--){
			a[j][cbegin] = x;
			x++;
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