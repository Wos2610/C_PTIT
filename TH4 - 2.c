/* Cho mang so nguyen gom n phan tu
a ) Gia tri lon thu hai trong mang
b ) Gia tri nho thu hai trong mang */

#include<stdio.h>

void nhapMang(int arr[], int *n){
	printf("Nhap n > 0 : n = ");
	scanf("%d", n);             // Vi n la con tro -> not &n ma la n
	printf("Nhap mang :\n ");
	int i;
	for(i = 0; i < *n ; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void minMax(int arr[], int n, int *min, int *max){
	int i;
	(*min) = (*max) = arr[0];
	for(i = 0; i < n; i++){
		if((*min) > arr[i]){
			(*min) = arr[i];
		}
		if((*max) < arr[i]){
			(*max) = arr[i];
		}
	}
}

void minMax2(int arr[], int n, int *min2, int *max2){
	int min, max;
	minMax(arr, n, &min, &max );
	(*min2) = max;
	(*max2) = min;
	int i;
	for(i = 0; i < n; i++){
		if( ((*min2) > arr[i]) && (arr[i] != min) ){
			(*min2) = arr[i];
		}
		if( ((*max2) < arr[i]) && (arr[i] != max) ){
			(*max2) = arr[i];
		}
	}
}

void ketQua(int min2, int max2){
	if(min2 == max2){
		printf("Khong ton tai gia tri min2 va max2");
	}
	else{
		printf("\nGia tri min2 = %d", min2);
		printf("\nGia tri max2 = %d", max2);
	}
}

int main(){
	int n;
	int arr[100];
	int min2, max2;
	
	nhapMang(arr, &n);
	
	minMax2(arr, n, &min2, &max2);
	
	ketQua(min2, max2);
	
	return 0;
}

