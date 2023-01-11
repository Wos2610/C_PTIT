/* Nhap vao cac he so cua da thuc P
   Nhap vao gia tri x tuy y
   Tính dao ham cua P */
   
#include<stdio.h>
#include<math.h>


void nhap(int *a, int *n){
	*n = 0;
	while(*n <= 0){
		printf("Nhap n > 0 : n = ");
		scanf("%d", n);
	}
	printf("Nhap cac he so cua da thuc P : ");
	int i;
	for(i = 0; i <= *n; i++){
		printf("\na%d = ", i);
		scanf("%d", &a[i]);
	}
}

double daoHam(int *a, int n, double x){
	double Pphay = a[1];               // vi khi dao ham thi a0 se bien mat
	int i;
	for(i = 2; i <= n; i++){
		Pphay += a[i] * i * pow(x, (i - 1));
	}
	return Pphay;
}

int main(){
	int n;
	int a[100];
	
	nhap(a, &n);
	
	double x;
	printf("\nNhap x : x = ");
	scanf("%lf", &x);
	
	double Pphay = daoHam(a, n, x);
	printf("\nDao ham cua P : %0.2lf", Pphay);
	
	return 0;
}
