/* Nhap vao cac he so cua da thuc P va gia tri tuy y cua x
   Tinh gia tri cua P */

#include<stdio.h>
#include<math.h>

void nhapHeSo(int a[], int *n){    // Mang a[] dung de luu cac he so cua da thuc P
	*n = 0;
	while(*n <= 0){
		printf("Nhap n > 0 : n = ");
		scanf("%d", n);
	}
	printf("Nhap he so : ");
	int i;
	for(i = 0; i <= *n; i++){
		printf("\na%d = ", i);
		scanf("%d", &a[i]);
	}
}

double tinhP(int a[], int n, double x ){
	double P = a[0];
	int i;
	for(i = 1; i <= n; i++){
		P += a[i] * pow(x, i);
	}
	return P;
}

int main(){
	int n;
	int a[100];
	
	nhapHeSo(a, &n);
	double x;
	printf("\nNhap x : x = ");
	scanf("%lf", &x);
	
	double P = tinhP(a, n, x);
	printf("\nP = %0.2lf", P);
	
	return 0;
}
