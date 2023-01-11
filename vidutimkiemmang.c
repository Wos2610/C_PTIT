// Vi du ve tim kiem tren mang

#include<stdio.h>
#include<stdbool.h>
#define LENGTH 10 

int* nhapMang(){
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
}

bool linearSearch(int arr[], int x){
	int i;
	for(i = 0; i< LENGTH; i++){
		if(arr[i] == x){
			return true;
		}
	}
	return false;
}

int demX(int arr[], int x){
	int i;
	int count = 0;
	for(i = 0; i< LENGTH; i++){
		if(arr[i] == x){
			count++;
		}
	}
	return count;
}

int main(){
	int *arr;
	printf("Nhap mang : ");
	arr = nhapMang();
	hienThi(arr);
	printf("\n");
	
	int x;
	printf(" Nhap x = ");
	scanf("%d", &x);
	
	if(linearSearch(arr, x)){ printf(" Ton tai gia tri %d trong mang\n ", x);
	}
	else{ printf(" KHONG ton tai gia tri %d trong mang\n", x);
	}
	
	printf("So lan xuat hien cua %d trong mang : %d", x, demX(arr, x));
	
	return 0;
}


