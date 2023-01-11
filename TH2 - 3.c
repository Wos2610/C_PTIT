// Tinh tong phan so tu 1 -> 1/n

#include<stdio.h>

int main(){
	unsigned int n,i;
	float sum = 0;
	printf("Nhap vao so tu nhien n = ");
	scanf("%u", &n);
	for(i = 1; i <= n; ++i){
		sum += (float)1/i;
	}
	printf("Sum = %0.2f ",sum);
	return 0;
	
}
