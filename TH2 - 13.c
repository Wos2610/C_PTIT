// Kiem tra mot so co phai la so thuan nghich hay khong

#include<stdio.h>

int main(){
	long long n;
	printf("Nhap vao gia tri n > 0 : n = ");
	scanf("%lld", &n);
	long long m = n;
	long long dao = 0;
	
	if(n <= 0){ printf("Vui long nhap lai gia tri n > 0");
	}
	else{
		while(m > 0){
			dao = dao * 10 + m % 10;
			m /= 10;
		}
	if(dao == n){printf("%lld là so thuan nghich", n);
	}
	else{ printf("%lld khong phai la mot so thuan nghich", n);
	}
	}
	return 0;
}
