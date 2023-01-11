// Vi du ve truyen mang vao ham

#include<stdio.h>

#define LENGTH 10
// Khoi tao hàm chua mang
void nhap( int arr[] ){
	int i;
	for(i = 0; i < LENGTH ; i++){
		scanf("%d", &arr[i]);
	}
}

void hienThi( int arr[] ){
	int i;
	for(i = 0; i < LENGTH; i++){
		printf("%6d", arr[i]);
	}
	arr[9] *= 100;
}

int main(){
	int arr[LENGTH];
	nhap(arr);
	hienThi(arr);
	printf("\n");
	hienThi(arr);
	return 0;
}
