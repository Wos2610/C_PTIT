// Vi du ve mang hai chieu

#include<stdio.h>

#define N 100

void nhapMangHaiChieu(int arr[N][N], int m, int n ){
	printf("Nhap vao mang : ");
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
}

void xuatMangHaiChieu(int arr[N][N], int m, int n){
	printf("Hien thi mang : \n");
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%6d", arr[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int m, n;
	printf("Nhap vao so hang, so cot cua mang : ");
	scanf("%d%d", &m, &n);
	
	int arr[N][N];
	
	nhapMangHaiChieu(arr, m, n);
	
	xuatMangHaiChieu(arr, m, n);
	
	return 0;
}
