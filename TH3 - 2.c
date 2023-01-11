// In hinh chu nhat bang cac dau x

#include<stdio.h>

int main(){
	int m, n;
	printf("Nhap vao gia tri m, n duong : ");
	scanf("%d%d", &m, &n);
	
	if(m > 0 && n > 0){
		int i, j;
		for( i = 1; i <= m ; i++){
			for ( j = 1; j <= n; j++){
				printf("   x   ");
			}
			printf("\n");
		}
		
	}
	else{ printf("Vui long nhap lai gia tri DUONG m , n");
	return 0;
	}
}
