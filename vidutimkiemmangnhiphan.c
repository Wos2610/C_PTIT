// Vi du tim kiem nhi phan 

#include<stdio.h>
#include<stdbool.h>
#define LENGTH 10

int*nhapMang(){
	static int arr[LENGTH];
	int i;
	for(i = 0; i < LENGTH; i++){
		scanf("%d", &arr[i]);
	}
	return arr;
}

void bubbleSort(int arr[]){
	int i, j;
	for(i = 0; i < LENGTH; i++){
		for(j = 0 ; j < LENGTH - i - 1 ; j++){
			if(arr[j + 1] < arr[j]){
				int tg = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tg;
			}
			
		}
	}
}

bool binarySearch(int arr[], int x){
	int leftIndex = 0;
	int rightIndex = LENGTH - 1;
	while( leftIndex <= rightIndex ){
		int mid = (leftIndex + rightIndex ) / 2;
		if( arr[mid] == x ){ 
			return true;
		}
		else if( arr[mid] < x ){
			leftIndex = mid + 1;
		}
		else{
			rightIndex = mid - 1;
		}	
	}
	return false;
}

int main(){
	int *arr;
	printf("Nhap vap mang : ");
	arr = nhapMang();
	
	bubbleSort(arr);
	
	int x;
	while(1){
		printf("Nhap gia tri x = ");
		scanf("%d", &x);
		if(x == -1){ break;
		}
		else if( binarySearch(arr, x) ){
			printf("Ton tai %d trong mang\n", x);
		}
		else{
			printf("KHONG ton tai %d trong mang\n", x);
		}
	}
	
	return 0;
}
