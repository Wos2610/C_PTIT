/*
Tinh tong S cac so tu nhien khong lon hon n
Ting tong S1 cac so tu nhien le khong lon hon n
Tinh tong S2 cac so tu nhien chan khong lon hon n
*/
 
#include<stdio.h>

int main(){
	unsigned int i, n;
	unsigned int sum = 0, sum1 = 0, sum2 = 0;
	printf("Nhap vao so tu nhien n = ");
	scanf("%u", &n);
	if ( n < 0){
		printf(" Vui long nhap lai ");}
	else {
		// Tinh tong cac so tu nhien khong lon hon n
	
		for( i = 0; i <= n; ++i){
			sum += i;
			// Tinh tong cac so tu nhien le khong lon hon n
			if(i % 2 == 1){
				sum1 += i;}
			// Tinh tong cac so tu nhien chan khong lon hon n
			else{ sum2 += i; }
			}	
	}
	printf("Tong S = %u\n", sum);
	printf("Tong le S1 = %u\n", sum1);
	printf("Tong chan S2 = %u\n", sum2); 
	return 0;
	
}
