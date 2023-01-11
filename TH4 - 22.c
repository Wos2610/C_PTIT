/*  Nhap vao hai ma tran A[m,n] va B[m,n]
	Tinh tong hai ma tran */

#include<stdio.h>

void nhap1(int a[50][50], int *m, int *n){
	*m = *n = 0;
	while(*m <= 0 || *n <= 0){
		printf("Ma tran A - Nhap m > 0 : m = ");
		scanf("%d", m);
		printf("Ma tran A - Nhap n > 0 : n = " );
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

void nhap2(int a[50][50], int *m, int *n){
	*m = *n = 0;
	while(*m <= 0 || *n <= 0){
		printf("Ma tran B - Nhap m > 0 : m = " );
		scanf("%d", m);
		printf("Ma tran B - Nhap n > 0 : n = ");
		scanf("%d", n);
	}
	int i, j;
	for(i = 0; i < *m; i++){
		for(j = 0; j < *n; j++){
			printf("b[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void tinhTong(int a[50][50], int m, int n, int b[50][50], int sum[50][50]){
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			sum[i][j] = a[i][j] + b[i][j];
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

int main(){
	int m, n;
	int a[50][50], b[50][50];
	int sum[50][50] = {0};
	
	nhap1(a, &m, &n);
	nhap2(b, &m, &n);
	
	printf("\n Ma tran A : \n");
	hienThi(a, m, n);
	printf("\n Ma tran B : \n");
	hienThi(b, m, n);
	
	tinhTong(a, m, n, b, sum);
	printf("\n Ma tran tong cua A va B : \n");
	hienThi(sum, m, n);
}
