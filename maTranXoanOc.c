#include<stdio.h>

int a[106][106];

int main(){
	int n;
	scanf("%d", &n);
	
	int x = 1;
	int rbegin = 1, rend = n;
	int cbegin = 1, cend = n;
	
	while(rbegin <= (n + 1)/2 && cbegin <= (n + 1)/2){
		for(int j = cbegin; j <= cend; j++){
			a[rbegin][j] = x;
			x++;
		}
		for(int i = rbegin + 1; i <= rend; i++){
			a[i][cend] = x;
			x++;
		}
		for(int j = cend - 1; j >= cbegin; j--){
			a[rend][j] = x;
			x++;
		}
		for(int i = rend - 1; i >= rbegin + 1; i--){
			a[i][cbegin] = x;
			x++;
		}
		rbegin++;
		rend--;
		cbegin++;
		cend--;
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}