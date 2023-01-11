#include<stdio.h>

#define M 1000000
int a[100][100];
int mark[1000006] = {0};
int save[1000006] = {0};

void sieve(){
	int i,j;
	for(i = 2; i * i <= M; i++){
		if(mark[i] == 0){
			for(j = i * i; j <= M; j += i){
				mark[j] = -1;
			}
		}
	}
}
int main(){
	int T;
	scanf("%d", &T);
	sieve();
	int i;
	int index = 0;
	for(i = 2; i <= M; i++){
		if(mark[i] == 0){
			save[index] = i;
			index++;
		}
	}
	int T1 = T;
	while(T--){
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
			a[rbegin][i] = save[k];
			k++;
		}
		for(j = rbegin + 1; j <= rend; j++){
			a[j][cend] = save[k];
			k++;
		}
		for(i = cend - 1; i >= cbegin; i--){
			a[rend][i] = save[k];
			k++;
		}
		for(j = rend - 1; j >= rbegin + 1; j--){
			a[j][cbegin] = save[k];
			k++;
		}
		rbegin++;
		rend--;
		cbegin++;
		cend--;
		}
		printf("Test %d:\n", T1 - T);
		for(i = 1; i <= n; i++){
			for(j = 1; j <= n; j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		} 
	}
}