/*  Nhap vao ma tran [ m x n ], m > 0, n > 0
	Tim ma tran chuyen vi cua ma tran nay */

#include<stdio.h>

void nhapMatrix(int a[50][50], int *m, int *n){
	*m = *n = 0;
	while(*m <= 0 || *n <= 0){
		printf("Nhap m > 0 : m = ");
		scanf("%d", m);
		printf("Nhap n > 0 : n = ");
		scanf("%d", n);
	}
	int i, j;
	for(i = 0; i < *m; i++){
		for(j = 0; j < *n; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void hienThi(int a[50][50], int m, int n){
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%6d", a[i][j]);
		}
		printf("\n");
	}
}

void chuyenVi(int a[50][50], int m, int n, int b[50][50]){ // b[i][j] = a[j][i] nen i < n va j < m
	int i,j;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			b[i][j] = a[j][i];
		}
	}
}

int main(){
	int n, m;
	int a[50][50], b[50][50];
	
	nhapMatrix(a, &m, &n);
	printf("Ma tran ban dau : \n");
	hienThi(a, m, n);
	printf("\n");
	
	printf("Ma tran chuyen vi : \n");
	chuyenVi(a, m, n, b);
	hienThi(b, n, m);
	
	return 0;
}
