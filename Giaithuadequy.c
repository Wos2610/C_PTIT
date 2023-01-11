// Tinh giai thua bang de quy

#include<stdio.h>

unsigned long long giaiThua( int );

unsigned long long giaiThua( int n ){
	if ( n == 0 || n == 1 ){
		return 1;
	}
	else {
		return n * giaiThua( n - 1);
	}
}

int main(){
	int n;
	printf("Nhap vao gia tri n : n = ");
	scanf("%d", &n);
	printf("%d! = %llu", n, giaiThua ( n ));
}
