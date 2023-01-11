// In ra tam giac an co chieu cao la h

#include<stdio.h>

int main(){
	int h;
	printf("Nhap vao chieu cao h > 0 : h = ");
	scanf("%d", &h);
	
	if( h > 0){
		int i, j;
		for(i = 1; i <= h; i++){
			for( j = 1 ; j <= h - i ; j++){
				printf("   ");
			}
			for( j = 1; j <= 2 * i - 1 ; j++){
				printf(" * ");
			}
			
		printf("\n");
		}	
		
	}
	else{ printf("Vui long nhap lai gia tri h > 0");
	}
	
	
	
	
	
	
	return 0;
}
