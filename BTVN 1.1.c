// BTVN buoi 1 bai 1

#include<stdio.h>

int main(){
	long long a, b;
	printf("Nhap a, b voi 1 <= a <= b <= 10^9 : ");
	scanf("%lld%lld", &a, &b);
	
	printf("\n %lld + %lld = %lld", a, b, a + b);
	getch();
	
	printf("\n %lld - %lld = %lld", a, b, a - b);
	getch();
	
	printf("\n %lld * %lld = %lld", a, b, a * b);
	getch();
	
	float c = (float) b / a;
	printf("\n %lld / %lld = %0.4f", b, a, c);
	getch();
	
	printf("\n %lld mod %lld = %lld", b, a, b % a);
	getch();
	
	int soCacSo = (b - a) /1 + 1;
	long long sum = (a + b) * (soCacSo) /2;
	printf("\n Tong cac so nguyen lien tiep tu %lld den %lld = %lld", a, b, sum);
	
	return 0;
	
}
