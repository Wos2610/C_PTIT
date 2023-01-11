// Tinh so PI theo cong thuc

#include<stdio.h>

int main(){
	double a;
	printf("Nhap vao do chinh xac a = ");
	scanf("%lf", &a);
	
	double PI;
	int k = 0;
	double ps = 1.0 / (2 * k + 1);
	int dau = 1;
	double sum;
	
	while(ps >= a ){
		ps = 1.0 / (2 * k + 1);
		sum = sum + dau * ps;
		dau = -1 * dau;
		k++;
	}
	
	PI = 4 * sum;
	printf("PI = %lf ", PI);
	
	return 0;
	
	
}
