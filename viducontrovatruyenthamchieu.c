// Vi du ve truyen tham chieu : thuc chat là truyen dia chi

#include<stdio.h>


void volume(int* x){
	*x = (*x)*(*x)*(*x);
}

int main(){
	int x;
	printf("Nhap canh cua khoi lap phuong x = ");
	scanf("%d", &x);
	printf("Do dai canh cua khoi lap phuong = %d\n", x);
	
	volume(&x);
	printf("The tich khoi lap phuong = %d", x);
	
	return 0;
}
