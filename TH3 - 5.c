// Ve tam giac so doi xung

#include<stdio.h>

int main(){
	int h; 
	printf("Nhap vao chieu cao h : h = ");
	scanf("%d", &h);
	
	if(h > 0 ){
		int i, j, k, l;
		for( i = 1; i <= h; i++){
			for( j = 1; j <= h - i; j++){ printf(" ");
			}
			for( k = 1; k <= i; k++){ printf("%d", k);
				}
			for( l = i - 1; l >= 1; l--){ printf("%d", l);
				}
			printf("\n");
		}
	}
	else{ printf("Vui long nhap lai h > 0 ");
	}
	return 0;
}
