// Tinh tong cac chu so cua mot so nguyen bat ki

#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao so nguyen n : n = ");
	scanf("%d", &n);
	long long sum = 0;
	if(n >= 0){
		int m = n;
		while(m > 0){
			sum = sum + (m % 10);
			m /= 10;
		}
		printf("Tong cac chu so cua %d = %lld", n, sum);
	}
	else{
		int m = -n;
			while(m > 0){
			sum = sum + (m % 10);
			m /= 10;
	    }
	    printf("Tong cac chu so cua %d = %lld", n, sum); 
    }
}
