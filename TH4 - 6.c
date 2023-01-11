/* Cho mang so nguyen gom n phan tu
   Tinh trung binh cong cac so chan va so le trong day
   In ket qua ra man hinh */
   
#include<stdio.h>

void nhapMang(int arr[], int *n){
	*n = 0;
	while( *n <= 0){
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

void tbc(int arr[], int n, float *tbcL, float *tbcC){
	int countC = 0;
	int sumL = 0;
	int sumC = 0;
	int i;
	for(i = 0; i < n; i++){
		if( arr[i] % 2 == 0 ){
			sumC += arr[i];
			countC++;
		}
		else{
			sumL += arr[i];
		}
	}
	
	*tbcC = (countC == 0) ? 0 : (float)(sumC / countC);
	*tbcL = (countC == n) ? 0 : (float)(sumL / (n - countC));
}

void hienThiKQ(int arr[], int n, float tbcL, float tbcC){
	tbc(arr, n, &tbcL, &tbcC);
	printf("TBC cac so chan trong mang = %0.2f\n", tbcC);
	printf("TBC cac so le trong mang = %0.2f", tbcL);
}

int main(){
	int n;
	int arr[100];
	float tbcC = 0;
	float tbcL = 0;
	
	nhapMang(arr, &n);
	
	hienThiKQ(arr, n, tbcL, tbcC);
	
	return 0;
}
