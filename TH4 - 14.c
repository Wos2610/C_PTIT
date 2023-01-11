/*  Mang gom n phan tu , nhap n - 1 phan tu
    Sap xep n - 1 phan tu theo thu tu tang dan
    Nhap so nguyen x tuy y. Chen x vao mang sao cho van giu nguyen tinh chat sap xep cua mang */

#include<stdio.h>

void nhapMang(int arr[], int *n){
	*n = 0;
	while(*n <= 0){
		printf("Nhap n > 0 : n = ");
		scanf("%d", n);
	}
	printf("Nhap mang :");
	int i;
	for(i = 0; i < (*n - 1) ; i++){ // Vi chi nhap n - 1 phan tu vao mang
		printf("\narr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void bubbleSort(int arr[], int n){
	int i,j;
	for(i = 0; i < n - 1 ; i++){     // Vi trong mang co n - 1 phan tu
		for(j = n - 1 ; j > i; j--){
			if(arr[j] < arr[j - 1]){
				int tg = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tg;
			}
		}
	}
}

int timViTri(int arr[], int n, int x){ // Dang xet mang co n phan tu
	if(x < arr[0]){
		return 0;
	}
	if(x > arr[n - 1]){
		return n;
	}
	int i;
	
	for(i = 0; i < n; i++){
		if(x <= arr[i]){
			return i;
		}
	}
}

void chen(int arr[], int n, int x, int k){
	int i;
	for(i = n ; i > k; i--){
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
	int x;
	printf("\nNhap x : x = ");
	scanf("%d", &x);
	
	bubbleSort(arr, n - 1);
	printf("\nMang truoc khi chen :");
	hienThi(arr, n - 1);
	
	int k = timViTri(arr, n - 1, x);
	
	chen(arr, n, x, k);
	
	printf("\nMang sau khi chen   :");
	hienThi(arr, n);
	
	return 0;
}


