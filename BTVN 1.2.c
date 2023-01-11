// BTVN buoi 1 bai 2

#include<stdio.h>
#include<math.h>

int main(){
	long long x1, x2, x3, y1, y2, y3;
	printf("Nhap toa do cua dinh A : x1, y1 = ");
	scanf("%lld%lld", &x1, &y1);
	printf("Nhap toa do cua dinh B : x2, y2 = ");
	scanf("%lld%lld", &x2, &y2);
	printf("Nhap toa do cua dinh C : x3, y3 = ");
	scanf("%lld%lld", &x3, &y3);
	
	long long x12 = x2 - x1;
	long long y12 = y2 - y1;
	long long x13 = x3 - x1;
	long long y13 = y3 - y1;
	
	double S = ( double ) 1/2 * fabs(x12 * y13 - x13 * y12);
	printf("Dien tich tam giac ABC = %0.4lf", S);
	
	return 0;
}
