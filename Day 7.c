// Bai 3

#include<stdio.h>
#include<math.h>

int main(){
	int n,m,p;
	printf("Nhap n, m, p: ");
	scanf("%d%d%d", &n, &m, &p);
	
	int a[100][100];
	int b[100][100];
	int tich[100][100];
	
	int i,j;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i = 0; i < m; i++){
		for(j = 0; j < p; j++){
			scanf("%d", &b[i][j]);
		}
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < p; j++){ 
			int temp = 0;
			int k;
			for(k = 0; k < m; k++){
				temp += a[i][k] * b[k][j];
			}
			tich[i][j] = temp;
		}
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < p; j++){
			printf("%d ", tich[i][j]);
		}
		printf("\n");
	}
	return 0;
}
