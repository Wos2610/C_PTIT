/* Nhap vao mang so nguyen gom n phan tu
   Tim so lan xuat hien cua tung phan tu trong mang */
   
#include<stdio.h>

void hienThiKQ(int*, int*, int );

void nhapMang(int arr[], int *n){
	*n = 0;
	while(*n <= 0){
		printf("Nhap n > 0 : n = ");
		scanf("%d", n);
	}
	printf("Nhap mang :");
	int i;
	for(i = 0; i < *n; i++){
		printf("\narr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}


int chiSo(int savearr[], int soPhanTu, int x){
	int i;
	for(i = 0; i < soPhanTu; i++){
		if(savearr[i] == x){
			return i;
		}
	}
	return -1;
}


void demLanXuatHien(int arr[], int n ){
	int savearr[100];                 // mang de luu cac gia tri ( khong trung lap ) 
	int count[100];                   // mang de luu so lan xuat hien cua cac gia tri trong mang savearr[]
	int soPhanTu = 0;                 // bien de dem so cac gia tri trong mang savearr[]
	
	int i;
	for(i = 0; i < n; i++){
		count[i] = 0;
	}
	for(i = 0; i < n ; i++){
		int index = chiSo(savearr, soPhanTu, arr[i]);      // bien dung de xac dinh vi tri cua phan tu da xh trong mang
		if( index == -1 ){
			savearr[soPhanTu] = arr[i];
			count[soPhanTu] = 1;
			soPhanTu++;
		}
		else{
			count[index]++;
		}
	}
	hienThiKQ(savearr, count, soPhanTu);
}

void hienThiKQ(int savearr[], int count[], int n){
	int i;
	printf("\nGia tri :           ");
	for(i = 0; i < n; i++){
		printf("%6d", savearr[i]);
	}
	printf("\nSo lan xuat hien  : ");
	for(i = 0; i < n; i++){
		printf("%6d", count[i]);
	}
}

int main(){
	int n;
	int arr[100];
	int savearr[100];
	int count[100];
	int soPhanTu = 0;
	
	nhapMang(arr, &n);
	demLanXuatHien(arr, n);
	
	return 0;
}


   
