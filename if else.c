// Vi du câu lenh IF - ElSE

#include<stdio.h>

int main(){
	int money; // don vi la k$
	puts("Nhap vao so tien :");
	scanf("%d", &money);
	if (money>=1000){
		printf("Chuc mung ban la mot trieu phu ");
	}
	else {
			printf("Rat tiec ban chua la mot trieu phu");
		}
	return 0;
	
}
