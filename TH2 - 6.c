// Nhap so tu nhien n va tinh tong cac so tu nhien khong lon hon n va chia het cho 7

#include<stdio.h>

int main(){
	unsigned int n;
	unsigned long sum = 0;
	int i;
	printf("Nhap vao so tu nhien n = ");
	scanf("%u", &n);
	
	if (n <0){
		printf("Ban da nhap sai. Vui long nhap lai");
	}
	else {
		for(i = 0; i <= n; ++i){
		if(i % 7 == 0)
		sum += i;	
		}
		printf("Tong cac so tu nhien khong lon hon n va chia het cho 7 = %lu", sum);
	}
	
	return 0;
	
}
