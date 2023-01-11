#include<stdio.h>

int main(){
// Bai 1
	
//	printf("Nhap vao hai so nguyen a va b : ");
//	scanf("%d%d", &a, &b);
//	printf("Tong %d + %d = %d", a, b, a + b);
	
	long long i;
	long long tong = 0 ;
	for(i = 0; i <= 1000000000; i++){
		tong += i;
	}
	printf("%lld", tong);
	
	return 0;

}
