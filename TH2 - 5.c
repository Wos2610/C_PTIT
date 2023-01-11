// Nhap so nguyen duong n . Tinh S = 1 + 1.2 + ... + 1.2.3...n

#include<stdio.h>

int main(){
	unsigned int n,i;
	unsigned long long sum = 0;
	unsigned long long gt = 1;
	printf("Nhap so nguyen duong n = ");
	scanf("%u",&n);
	
	if(n <= 0 ){
		printf("Ban da nhap sai. Vui long nhap lai");}
	else{
		for(i = 1; i <= n; ++i){
			gt *= i;
			sum += gt;
		}
		printf("Tong cac giai thua S = %lld",sum);
	}
	
	return 0;
}
