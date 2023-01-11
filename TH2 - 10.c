// Phan tich mot so nguyen thanh thua so nguyen to

#include<stdio.h>

int main(){
	unsigned int n;
	printf("Nhap vao so nguyen n > 1 : ");
	scanf("%u", &n);
	
	if(n <= 1){ printf("Vui long nhap lai so nguyen n > 1");}
	else{
		printf("%u = ",n);
		unsigned int i = 2;
		while(n > 1){
			if(n % i == 0){
				printf("%u",i);
				if (n != i){printf("x");}
				n /= i;
			}
			else{i++;}
			
		}	
	}
	return 0;
}
	
