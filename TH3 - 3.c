// In ra tam giac vuong co chieu cao h

#include<stdio.h>

int main(){
	int h;
	printf("Nhap vao chieu cao h : h = ");
	scanf("%d", &h);
	
	if(h > 0){
		int i, j;
		for ( i = h; i >= 0; i--){           // Tam giac co goc vuong ben trai phia tren
			for ( j = 1; j <= i; j++){
				printf("   *   ");
			}
			printf("\n");
		}
		
		int a, b;
		for ( a = 1; a <= h; a++){           // Tam giac co goc vuong ben trai phia duoi
			for ( b = 1; b <= a; b++){
				printf("   *   ");
			}
			printf("\n");
		}
		
		
	}
	else{ printf("Vui long nhap lai gia tri h duong ");
	}
	return 0;
}
