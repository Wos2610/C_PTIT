#include<stdio.h>

void nhap(long long *a, long long *b){
		printf("Nhap a, b <= 10^18 : ");
		scanf("%lld%lld", a, b);
}

unsigned long long tong(long long a, long long b){
	unsigned long long sum = 0;
	sum = a + b;
	return sum;
}

int main(){
	long long a, b;
	nhap(&a, &b);
	unsigned long long sum = tong(a, b);
	printf("Tong %lld + %lld = ", a, b);
	printf("%llu", sum);
	return 0;
}
