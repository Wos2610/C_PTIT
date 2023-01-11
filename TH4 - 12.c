/* Nhap ngau nhien gia tri cua n - 1 phan tu trong mang
   Nhap gia tri 0 <= k < n va x
   Chen x vao vi tri k trong mang */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void nhapMang(int arr[], int *n){
	*n = 0;
	while( *n <= 0 ){
		printf("Nhap n > 0 : n = ");
		scanf("%d", n);
	}
	srand(time(NULL));
	int i;
	for(i = 0; i < (*n - 1); i++){
		arr[i]= rand();
	}
}

int nhapK(int n){
	int k = -1;
	while( (k < 0) || (k >= n) ){
		printf("Nhap 0 <= k < n : k = ");
		scanf("%d", &k);
	}
	return k;
}

void chenX(int arr[], int n, int k, int x){
	int i;
	for(i = n; i > k; i--){
			arr[i] = arr[i - 1];
	}
	arr[k] = x;
}

void hienThi(int arr[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%6d", arr[i]);
	}
}

int main(){
	int n;
	int arr[100];
	
	nhapMang(arr, &n);
	
	int k = nhapK(n);
	
	int x;
	printf("Nhap x : x = ");
	scanf("%d", &x);
	
	printf("Mang truoc khi chen : ");
	hienThi(arr, n);
	
	printf("\nMang sau khi chen : ");
	chenX(arr, n, k, x);
	hienThi(arr, n);
	
	return 0;
}
	
