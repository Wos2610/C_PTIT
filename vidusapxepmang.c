// Sap xep mang

#include<stdio.h>
#define LENGTH 10

int* nhap(){
	static int arr[LENGTH];
	int i;
	for(i = 0; i < LENGTH; i++){
		scanf("%d", &arr[i]);
	}
	return arr;
}

void hienThi(const int arr[]){
	int i;
	for(i = 0; i < LENGTH; i++){
		printf("%6d", arr[i]);
	}
	printf("\n");
}

void bubbleSortIn(int arr[]){
	int  i, j;
	for(i = 0; i < LENGTH -1 ; i++){
		for ( j = LENGTH - 1; j > i; j--){
		if(arr[j] < arr[j - 1]){
			int tg = arr[j];
			arr[j] = arr[j -1];
			arr[j - 1] = tg;
		}
	}
	}
}

void bubbleSortDe(int arr[]){
	int  i, j;
	for(i = 0; i < LENGTH - 1; i++){
		for ( j = LENGTH - 1; j > 0; j--){
		if(arr[j] > arr[j - 1]){
			int tg = arr[j];
			arr[j] = arr[j -1];
			arr[j - 1] = tg;
		}
	}
	}
}

void bubbleSortDe2(int arr[]){
	int  i, j;
	for(i = 0; i < LENGTH - 1; i++){
		for ( j = 0; j < LENGTH - 1; j++){
		if(arr[j + 1] > arr[j]){
			int tg = arr[j + 1];
			arr[j + 1] = arr[j];
			arr[j] = tg;
		}
	}
	}
}

int main(){
	int *arr;
	printf("Nhap vao mang : ");
	arr = nhap();
	printf("Truoc khi sap xep : ");
	hienThi(arr);
	
	printf("Sau khi duoc sap xep theo thu tu tang dan : ");
	bubbleSortIn(arr);
	hienThi(arr);
	
	printf("Sau khi duoc sap xep theo thu tu giam dan : ");
	bubbleSortDe(arr);
	hienThi(arr);
	
	printf("Sau khi duoc sap xep theo thu tu giam dan cach 2 : ");
	bubbleSortDe2(arr);
	hienThi(arr);
	
	return 0;
}
