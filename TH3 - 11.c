/* Nhap vao gia tri cua so nguyen duong n
   Kiem tra xem cac chu so cua n co sap xep theo thu tu tang dan hay khong
   Tim chu so dau tien cua n
   Dem so lan xuat hien cua chu so dau tien trong so vua nhap 
*/

#include<stdio.h>
#include<stdbool.h>

int nhapN(){
	int n;
	printf("Nhap vao gia tri nguyen suong n : n =  ");
	scanf("%d", &n);
	if (n <= 0 ){ printf("Vui long nhap lai gia tri nguyen duong n\n");
	}
	return n;
}

bool kiemTraTangDan(int n){
	int chusotruoc = 0;
	int chusosau = 0;
	while( n > 0){
		chusosau = n % 10;
		n /= 10;
		chusotruoc = n % 10;
		if ( chusotruoc >= chusosau ){
			return false;
		}
	}
	return true;
}

int firstNumber(int n){
	int chusodau = 0;
	while( n > 0 ){
		chusodau = n % 10;
		n /= 10;
	}
	return chusodau;
}


int dem( int n ){
	int chuso = 0;
	int count = 0;
	while ( n > 0 ){
		chuso = n % 10;
		if ( chuso == firstNumber(n) ){
			count++;
		}
		n /= 10;
	}
	return count;
}

int main(){
	int n;
	n = nhapN();
	
	if( kiemTraTangDan(n) ){
		printf("Cac chu so cua %d sap xep theo thu tu tang dan\n", n);
	}
	else { printf("Cac chu so cua %d KHONG sap xep theo thu tu tang dan\n", n);
	}
	
	printf("Chu so dau tien cua %d : %d\n", n, firstNumber(n));
	
	printf("Chu so dau tien cua %d xuat hien %d lan\n", n, dem(n));
	return 0;
}

