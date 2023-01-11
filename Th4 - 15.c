/* Mang arr1 có n + m phan tu. Nhap vao arr1 n phan tu tuy y
   Mang arr2 co m phan tu nhap tuy y
   Nhap k / 0 <= k < n
   Chen mang arr2 co do dai m vao vi tri k cua mang arr1 */
   
   
// Ham nhapMang dung chung cho ca mang arr1 va arr2
#include<stdio.h>

void nhapMang(int arr[], int *n){ 
	*n = 0;
	while(*n <= 0){
		printf("Nhap so phan tu cua mang > 0 :  ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i < *n; i++){
		printf("\narr[%d] = ",i);
		scanf("%d", &arr[i]);
	}
}

int nhapK(int *k, int n){
	*k = -1;
	while((*k < 0) || (*k >= n)){
		printf("\nNhap 0 <= k < n : k = ");
		scanf("%d", k);
	}
	return *k;
}

void chen(int arr[], int n, int brr[], int m, int k){
	// Dich cac phan tu ben phai tinh tu k sang ben phai m don vi 
	int i;
	for(i = m + n - 1; i >= k ; i--){
		arr[i + m] = arr[i];
	}
	for(i = k; i < (k + m); i++){
		arr[i] = brr[i - k];
	}
}

void hienThi(int arr[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%6d", arr[i]);
	}
}

int main(){
	int n,m;
	int arr[100];
	int brr[100];
	
	printf("Nhap mang arr[] :\n");
	nhapMang(arr, &n);
	
	printf("Nhap mang brr[] :\n");
	nhapMang(brr, &m);
	
	int k = nhapK(&k, n);
	
	printf("\nMang arr[] truoc khi chen :          ");
	hienThi(arr, n);
	
	printf("\nMang arr[] sau khi chen mang brr[] : ");
	chen(arr, n, brr, m, k);
	hienThi(arr, n + m);
	
	return 0;
}
