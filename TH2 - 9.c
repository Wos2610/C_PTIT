// Kiem tra xem mot so có phai la mot so nguyen to hay khong

#include<stdio.h>
#include<math.h>

int main(){
	int n;
	printf("Nhap vao so nguyen n : ");
	scanf("%d", &n);
	
	if(n < 2 ){
		printf(" %d khong phai la mot so nguyen to ", n);
	}
	else {
		int i;
		int mark = 1; // Ðanh dau so nguyen to
		for(i = 2; i <= sqrt(n); ++i){
			if(n % i == 0){
				mark = 0;
				break;}
		}
		if ( mark == 1){
			printf("%d la mot so nguyen to", n);
		}
		else {
			printf("%d khong phai la mot so nguyen to ", n);
		}	
	}	
	
	return 0;
}
