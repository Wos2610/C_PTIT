// Kiem tra 2 so tu nhien co phai hai so nguyen to cung nhau

#include<stdio.h>

int main(){
	int m, n;
	printf("Nhap vao hai so tu nhien m > 0 , n > 0  : ");
	scanf("%d%d", &m , &n);
	
	if(m <= 0 || n <= 0){ printf("Vui long nhap lai hai so tu nhien m > 0, n > 0 ");
	}
	else{
		int a = m;
		int b = n;
		while(a != b){
			if ( a > b){
				a = a - b;
			}
			else{ b = b -a;
			}
		}
		int UCLN = a;
		if( UCLN == 1){ printf("%d va %d la hai so nguyen to cung nhau", m,n);
		}
		else{ printf("%d va %d KHONG la hai so nguyen to cung nhau", m,n);
		}
	}
	return 0;
}
