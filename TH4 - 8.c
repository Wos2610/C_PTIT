/* Nhap vao mang gom n phan tu
   Kiem tra xem mang co phai mang doi xung khong */

#include<stdio.h>

void nhapMang(int arr[], int *n){
	*n = 0;
	while(*n <= 0){
		printf("Nhap n > 0 : n = ");
		scanf("%d", n);
	}
	printf("Nhap mang : ");
	int i;
	for(i = 0; i < *n ; i++){
		printf("\narr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void ktraDoiXung(int arr[], int n){
	int first = arr[0];
	int last = arr[n-1];
	int i;
	for(i = 1; i <= (n / 2); i++){
		if(first == last){
			first = arr[i];
			last = arr[n - 1 - i];
		}
	}
	if(first == last){
		printf("Day la mang doi xung.");
	}
	else{
		printf("Day KHONG la mang doi xung.");
	}
}

int main(){
	int n;
	int arr[100];
	
	nhapMang(arr, &n);
	
	ktraDoiXung(arr, n);
	
	return 0;
}
