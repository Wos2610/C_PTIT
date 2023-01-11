#include<stdio.h>

int a[106][106] = {0};
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n,m;
		scanf("%d%d", &n, &m);
		int i,j;
		for(i = 1; i <= n; i++){
			for(j = 1; j <= m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		int rbegin = 1;
		int rend = n;
		int cbegin = 1;
		int cend = m;
		while(rbegin <= (n + 1)/2 && cbegin <= (m + 1)/2){
			for(i = cbegin; i <= cend; i++){
				printf("%d ", a[rbegin][i]);
			}
			for(j = rbegin + 1; j <= rend; j++){
				printf("%d ", a[j][cend]);
			}
			if(rend > rbegin){
				for(i = cend - 1; i >= cbegin; i--){
					printf("%d ", a[rend][i]);
				}
			}
			if(cend > cbegin){
				for(j = rend - 1; j >= rbegin + 1; j--){
					printf("%d ", a[j][cbegin]);
				}
			}
			rbegin++;
			cbegin++;
			rend--;
			cend--;
		}
		printf("\n");
	}
}