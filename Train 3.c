#include<stdio.h>

int main(){
	long long n = 0;
	while(n <= 0){
		printf("Nhap so nguyen n > 0 : n = ");
		scanf("%lld", &n);
	}
	
	long long tong = ((1 + n)*n)/2;
	printf("Tong cua %u so tu nhien dau tien = %lld", n, tong);
	return 0;
}
