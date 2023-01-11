/* Nhap vao mot mang co n phan tu
   In ra cac phan tu sao cho moi phan tu chi xh 1 lan */
   
#include<stdio.h>
#include<stdbool.h>

void nhapMang(int arr[], int *n){
	*n = 0;
	while(*n <= 0){
		printf("Nhap n > 0 : n = ");
		scanf("%d", n);
	}
	printf("Nhap mang");
	int i;
	for(i = 0; i < *n; i++){
		printf("\narr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

bool chuaXH(int savearr[], int n, int x){
	int i;
	for(i = 0; i < n; i++){
		if(x == savearr[i]){
			return false;
		}
	}
	return true;
}

void hienThiKQ(int arr[], int n){
	int savearr[100];
	int count = 0;
	int i;
	for(i = 0; i < n; i++){
		if( chuaXH(savearr, count, arr[i]) ){
			printf("%6d", arr[i]);
			savearr[count] = arr[i];
			count++;
		}
	}
}

int main(){
	int n;
	int arr[100];
	
	nhapMang(arr, &n);
	
	hienThiKQ(arr, n);
	
	return 0;
}
