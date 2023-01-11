/*  Nhap vao ma tran [m, n] m,n > 0
	Tim Max tren moi hang cua ma tran nay */
	
#include<stdio.h>

void nhapMatrix(int arr[50][50], int *m, int *n){
	*m = *n = 0;
	while(*m <= 0 || *n <= 0){
		printf("Nhap m > 0 : ");
		scanf("%d", m);
		printf("Nhap n > 0 : ");
		scanf("%d", n);
	}
	int i, j;
	for(i = 0; i < *m; i++){
		for(j = 0; j < *n; j++){
			printf("arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}

void timMax(int arr[50][50], int m, int n){
	int i,j;
	for(i = 0; i < m; i++){
		int max = 0;
		for(j = 0; j < n; j++){
			if(arr[i][j] > max){
				max = arr[i][j];
		 	}	
		}
		printf("\nMax cua hang %d = %d", i, max);
	}
}

void hienThi(int arr[50][50], int m, int n){
	int i,j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%6d", arr[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int arr[50][50];
	int m, n;
	
	nhapMatrix(arr, &m, &n);
	printf("\n");
	hienThi(arr, m, n);
	
	timMax(arr, m, n);
	
	return 0;
}
