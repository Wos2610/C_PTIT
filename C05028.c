#include<stdio.h>

int a[16][16] = {0};

void swap(int n, int m){
	int i,j;
	for(i = n; i >= 1; i--){
		for(j = m; j >= 1; j--){
			if(a[i][j] == 1){
				a[i][j] = 0;
			}
			else{
				a[i][j] = 1;
			}
		}
	}
}

void xuat(int n, int m){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int n;
	scanf("%d\n", &n);
	char x ;
	int i, j;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			scanf("%c", &x);
			a[i][j] = (x - '0');
		}
		getchar();
	}
	
//	xuat(n, n);

	int count = 0;
	
	for(i = n; i >= 1; i--){
		for(j = n; j >= 1; j--){
			if(a[i][j] == 1){
				swap(i, j);
				count++;
			}
		}
	}
	printf("%d", count);
}
