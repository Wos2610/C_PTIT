/* Nhap vao mang gom n phan tu
   Nhap vao 2 gia tri a va b thoa man a < b
   Tinh tong cac phan tu mang co gia tri nam trong doan [a,b] */

#include<stdio.h>

int nhapMang(int arr[], int *n){
	*n = 0;
	while( *n <= 0 ){
		printf("Nhap n > 0 : n = ");
		scanf("%d", n);
	}
	
	printf("Nhap mang :");
	int i;
	for(i = 0; i < *n ; i++){
		printf("\narr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

unsigned int  tinhTong(int arr[], int n, int *a, int *b){
	while(*a >= *b){
		printf("Nhap a < b : ");
		scanf("%d%d", a, b);
	}
	unsigned int sum = 0;
	int i;
	for(i = 0; i < n; i++){
		if( (*a <= arr[i]) && (arr[i] <= *b) ){
			sum += arr[i];
		} 
	}
	return sum;
}

int main(){
	int n;
	int arr[100];
	int a, b;
	
	nhapMang(arr, &n);
	
	unsigned int sum = tinhTong(arr, n, &a, &b);
	
	printf("Tong cac phan tu trong mang nam trong [%d,%d] = %u", a, b, sum);
	
	return 0;
}
