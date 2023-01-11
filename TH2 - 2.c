// Nhap so tu nhien n roi tinh tong Sum = 1 + 2 + ... + n

#include<stdio.h>

int main(){
	int n, sum = 0, i;
	printf("Nhap vao so tu nhien n = ");
	scanf("%d", &n);
	if( n < 0){
		printf(" Vui long nhap dung gia tri cua n\n");
	}
	else{
		for(i=0 ; i <= n; ++i){
			sum += i;
		}
		printf("\nSum = %d",sum);
	}
	return 0;
}
