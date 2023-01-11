// Tao cac gia tri ngau nhien cho n phan tu cua mang ( cac phan tu khong trung nhau tung doi mot bat ki )

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

bool chuaXH(int arr[], int n, int x){
	int i;
	for(i = 0; i < n; i++){
		if(x == arr[i]){
			return false;
		}
	}
	return true;
}

void nhapN(int arr[], int *n){
	*n = 0;
	while(*n <= 0){
		printf("Nhap n > 0 : n = ");
		scanf("%d", n);
	}
	
	srand(time(NULL));
	int i = 0;
	while(i < *n){
		int random = rand();
		if( chuaXH(arr, i, random) ){
			arr[i] = random;
			i++;
		}
	}
}

void hienKQ(int arr[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%6d", arr[i]);
	}
}

int main(){
	int n;
	int arr[100];
	
	nhapN(arr, &n);
	hienKQ(arr, n);
	
	return 0;
}
