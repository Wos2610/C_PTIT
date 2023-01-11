// Nhap so tu nhien n. In ra cac so chan nho hon n va cac so le nho hon n

#include<stdio.h>

int main(){
	int n,i;
	printf("Nhap vao so tu nhien n = ");
	scanf("%d", &n);
	if(n<0){ printf("Vui long nhap n > 0");}
	else {
	printf("Cac so chan nho hon n : ");
	for(i=0 ; i < n ; ++i){
		if(i % 2 == 0){
		
		printf("\ni = %d", i);
		}
	}
	printf("\nCac so le nho hon n : ");
	for(i=0 ; i < n ; ++i){
	
		if(i % 2 == 1){
		printf("\ni = %d", i);
		}
	}
}
	return 0;
}

