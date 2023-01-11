/* Nhap vao mang gom n phan tu
   Nhap them gia tri k sao cho 0 <= k < n
   Xoa phan tu o vi tri k ra khoi mang */
   
#include<stdio.h>

void nhapMang(int arr[], int *n){
	*n = 0;
	while(*n <= 0){
		printf("Nhap n > 0 : n = ");
		scanf("%d", n);
	}
	printf("Nhap mang : ");
	int i;
	for(i = 0; i < *n; i++){
		printf("\narr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

int nhapK(int n){
	int k = -1;
	while(k < 0 || k >= n){
		printf("Nhap 0 <= k < n : k = ");
		scanf("%d",&k);
	}
	return k;
}

void xoaPhanTu(int arr[], int *n, int k){ // phai thay doi gia tri cua n -> n - 1 nên dùng con tro
	int i;
	for(i = k; i < *n - 1; i++){
		arr[i] = arr[i + 1];
	}
	*n -= 1;                              // xoa bot 1 phan tu
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
	
	printf("Mang truoc khi xoa : ");
	hienThi(arr, n);
	
	printf("\n  Mang sau khi xoa : ");
	xoaPhanTu(arr, &n, k);
	hienThi(arr, n);
	
	return 0;
}
