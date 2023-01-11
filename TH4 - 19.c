/*  Nhap he so cua 2 da thuc P(x) và Q(x)
	Tinh tong P(x) + Q(x) : in ra phep tinh */

#include<stdio.h>
#include<math.h>

void nhap1(int *a, int *n){
	*n = 0;
	while(*n <= 0){
		printf("Nhap n > 0 : n =  ");
		scanf("%d", n);
	}
	printf("Nhap cac he so cua da thuc thu nhat : ");
	int i;
	for(i = 0; i <= *n; i++){
		printf("\na%d = ", i);
		scanf("%d", &a[i]);
	}
}

void nhap2(int *a, int *n){
	*n = 0;
	while(*n <= 0){
		printf("Nhap m > 0 : m = ");
		scanf("%d", n);
	}
	printf("Nhap cac he so cua da thuc thu hai : ");
	int i;
	for(i = 0; i <= *n; i++){
		printf("\nb%d = ", i);
		scanf("%d", &a[i]);
	}
}

double tongHaiDaThuc(int *a, int n, int *b, int m, int *c, int *p, double x){
	double tong = 0;
	int i;
	*p = (m > n) ? m : n ;
	for(i = 0; i <= *p; i++){
		c[i] = a[i] + b[i];
	}
	printf("P(x) + Q(x) = ");
	for(i = 0; i <= *p; i++){
		tong += p[i] * pow(x, i);
		printf("%d*x^%d", c[i], i);
		if(i < *p){
			printf(" + ");
		}
	}
	
	printf(" = %0.2lf ", tong);
}

int main(){
	int n, m, p;
	int a[100] = {0};
	int b[100] = {0};
	int c[100] = {0};
	
	nhap1(a, &n);
	nhap2(b, &m);
	
	double x;
	printf("Nhap x : x = ");
	scanf("%lf", &x);
	
	double tong = tongHaiDaThuc(a, n, b, m, c, &p, x);
	
	
	return 0;
}
