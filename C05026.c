#include<stdio.h>

#define M 1000006

int a[100][100] = {0};
int mark[1000006] = {0};
int count[1000006] = {0};

void sieve(){
	int i,j;
	mark[0] = mark[1] = -1;
	for(i = 2; i * i <= M; i++){
		if(mark[i] == 0){
			for(j = i * i; j <= M; j += i){
				mark[j] = -1;
			}
		}
	}
}
int main(){
	sieve();
	int n;
	scanf("%d", &n);
	int max = 0;
	int i,j;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			scanf("%d", &a[i][j]);
			if(mark[a[i][j]] == 0){
				count[i]++;
			}
		}
		if(count[i] > max){
			max = count[i];
		}
	}
	for(i = 1; i <= n; i++){
		if(count[i] == max){
			printf("%d\n", i);
			for(j = 1; j <= n; j++){
				if(mark[a[i][j]] == 0){
					printf("%d ", a[i][j]);
				}
			}
		break;
		}
	}
	return 0;
}