/* Nhap vao gia tri n > 0
   Dem so chu so cua n
   Dem so chu so le cua n 
   Tim trung binh cong cac cu so cua n 
*/

#include<stdio.h>

int nhapN(){
	int n;
	printf("Nhap vao gia tri n > 0 : n = ");
	scanf("%d", &n);
	if ( n <= 0 ){ printf("Vui long nhap lai n > 0");
	}
	return n;
}

int soChuSo(int n){
	unsigned int count = 0;
	while ( n > 0 ){
		count++;
		n /= 10;
	}
	return count;	
}

int soChuSoLe( int n){
	unsigned int count = 0;
	int tg;
	while ( n > 0 ){
		tg += n % 10;
		if ( tg % 2 == 1){
		count++;
		}
		n /= 10;
	}
	return count;
}

float tbc( int n ){
	unsigned int sum = 0;
	unsigned int count = 0;
	while ( n > 0 ){
		sum += n % 10;
		count++;
		n /= 10;
	}
    float tbc = 0;
    tbc = (float)sum / count;
	return tbc;
}


int main(){
	int n;
	n = nhapN();
	int m = n;
	printf("So cac chu so cua %d : %u\n", m, soChuSo(n));
	printf("So cac chu so le cua %d : %u\n", m, soChuSoLe(n));
	printf("Trung binh cong cac chu so cua %d : %0.2f\n", m, tbc(n));
	return 0;

}
