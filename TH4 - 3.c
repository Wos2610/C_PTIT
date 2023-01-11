/* Cho so duong n va mang arr gom n so nguyen tuy y 
a ) Sap xep cac phan tu theo thu tu tang dan tu trai qua phai
b ) Sap xep cac phan tu theo thu tu giam dan tu trai qua phai 
c ) Hien thi ket qua truoc va sau sap xep */

#include<stdio.h>

void nhapMang(int arr[], int *n){
	while( *n <= 0 ){
		printf("Nhap so nguyen duong n : n = ");
		scanf("%d", n);
	}
	printf("Nhap mang : \n");
	int i;
	for(i = 0; i < *n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void bubbleSortIn(int arr[], int n){
	int i,j;
	for( i = 0; i < n - 1; i++){
		for( j = n - 1; j  > i ; j-- ){
			if( arr[j] < arr[j - 1]){
				int tg = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tg;
			}
		}
	}
}

void bubbleSortDe(int arr[], int n){
	int i,j;
	for( i = 0; i < n - 1; i++){
		for( j = n - 1; j  > i ; j-- ){
			if( arr[j] > arr[j - 1]){
				int tg = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tg;
			}
		}
	}
}

void ketQua(int arr[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%5d", arr[i]);
	}
}

int main(){
	int n;
	int arr[100];
	nhapMang(arr, &n);
	printf("Mang truoc khi sap xep : ");
	ketQua(arr, n);
	
	printf("\nCac phan tu trong mang sap xep theo thu tu tang dan :");
	bubbleSortIn(arr, n);
	ketQua(arr, n);
	
	printf("\nCac phan tu trong mang sap xep theo thu tu giam dan :");
	bubbleSortDe(arr, n);
	ketQua(arr, n);
	
	return 0;
}
