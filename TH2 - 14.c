// Tinh gia tri cua n!

#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao so tu nhien n : n = ");
	scanf("%d", &n);
	
	if(n < 0){ printf("Vui long nhap lai gia tri n là so tu nhien");
	}
	else if( n == 0){
		printf("Khi n = 0 thi 0! = 0");
	}
	else{
		long long gt = 1;
		int m = n;
		while(m > 0){
			gt = gt * m ;
			m = m - 1;
		}
		printf("%d! = %lld ", n, gt);
	}
	return 0;
}
