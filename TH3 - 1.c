// In ra hinh chu nhat gom m hang, moi hang in ra cac so tu 1 -> n

#include<stdio.h>

int main(){
	int m,n;
	printf("Nhap vao gia tri m, n duong : ");
	scanf("%d%d",&m , &n);
	if( m > 0 && n > 0 ){
		// Cách 1
//		int count = 0;
//		int i;
//		while( count <= m ){
//			for( i = 1; i <= n; i++){
//				printf("%5d", i);
//				if( i == n){
//					printf("\n");
//					count++;
//				}
//			}
//		}
       // Cach 2
        int i,j;
        for( i = 1; i <= m ; i++){
        	for( j = 1; j <= n; j++){
        		printf("%5d", j);
			}
			printf("\n");
		}
	}
	else{ printf("Vui long nhap lai gia tri m, n duong");
	}
	return 0;
}
