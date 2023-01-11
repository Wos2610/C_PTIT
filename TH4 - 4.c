/* Nhap mang so nguyen gom n phan tu
   Nhap so nguyen x va dem so lan xuat hien cua x trong mang */
#include<stdio.h>

void nhapMang(int arr[], int *n){
	while( *n <= 0 ){
		printf("Nhap vao n > 0 : n = ");
		scanf("%d", n);
	}
	printf("Nhap mang :");
	int i;
	for( i = 0; i < *n; i++){
		printf("\narr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
int nhapX(){
	int x;
	printf("Nhap vao so nguyen x : x = ");
	scanf("%d", &x);
	return x;
}

int demX(int arr[], int n, int x){
	int i;
	int count = 0;
	for(i = 0; i < n; i++){
		if( arr[i] == x ){
			count++;
		}
	}
	return count;
}

int main(){
	int n;
	int arr[100];
	
	
	nhapMang(arr, &n);
	
	int x = nhapX();
	
	int count = demX(arr, n, x);
	printf("So lan xuat hien cua %d : %d", x, count);
	
	return 0;
}
