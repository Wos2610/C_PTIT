/* Nhap so duong n va nhap mang arr[0] -> arr[n-1]
   Tim Max , Min trong mang tren */

#include<stdio.h>

void nhap(int arr[], int *n){
	printf("Nhap n > 0 , n = ");
	scanf("%d", n);               // Vi n là con tro -> not &n ma se la n 
	printf("Nhap mang :\n ");
	int i;
	for(i = 0; i < *n; i++){
		printf("\narr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

int maxOfArr(int arr[], int n){
	int i;
	int max = arr[0] ;
	for(i = 0; i < n ; i++ ){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	return max;
}

int minOfArr(int arr[], int n){
	int i;
	int min = arr[0] ;
	for(i = 0; i < n ; i++ ){
		if(min > arr[i]){
			min = arr[i];
		}
	}
	return min;
}

int main(){
	int n;
	int arr[100];
	
	nhap(arr, &n);
	printf("\n");
	printf("Gia tri nho nhat trong mang : %d\n",minOfArr(arr, n));
	printf("Gia tri lon nhat trong mang : %d",maxOfArr(arr, n));
	
	return 0;
}
   

