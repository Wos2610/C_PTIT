/* Nhap mang gom n phan tu
   Nhap gia tri nguyen x
   Tim gia tri k gan x nhat <=> | k - x | gan 0 nhat */
   
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void nhapMang(int arr[], int *n){
	while( *n <= 0 ){
		printf("Nhap vao n > 0 : n = ");
		scanf("%d", n);
	}
	printf("Nhap mang : ");
	int i;
	for(i = 0; i < *n; i++){
		printf("\narr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

int nhapX(){
	int x;
	printf("Nhap x : x = ");
	scanf("%d", &x);
	return x;
} 


int hieuMin(int arr[], int n, int x){
	int i;
	int hieu = abs(arr[0] - x) ;
	for(i = 1 ; i < n ; i++){
		if( hieu > ( abs(arr[i] - x) ) ){
			hieu = abs(arr[i] - x);
		}
	}
	return hieu;
}

bool chuaXuatHien(int b[], int count, int y){  // Ham b dung de luu lai nhung gia tri k thoa man
	int i;
	for(i = 0; i < count ; i++){
		if( y == b[i] ){
			return false;
		}
	}
	return true;
}

void inKetQua(int arr[], int n, int x, int hieu){
	int i;
	int b[100];
	int count = 0;     // dem so gia tri k thoa man
	for( i = 0; i < n; i++){
		if( ( abs(arr[i] - x) == hieu )  && ( chuaXuatHien(b , count, arr[i]) ) ){
			printf("%6d", arr[i]);
			b[count] = arr[i];
			count++;
		}
	}
}

int main(){
	int n = 0;
	int arr[100];
	
	nhapMang(arr, &n);
	
	int x = nhapX();
	
	int hieu = hieuMin(arr, n, x);
	
	inKetQua(arr, n, x, hieu);
	
	return 0;
}
