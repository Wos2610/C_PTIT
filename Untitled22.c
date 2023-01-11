#include<stdio.h>

int main(){
	int n, i = 1;
	double x = 0;
	scanf("%d%lf", &n, &x);
	
	double tu = 1, mau = 1;
	double sum = 1;
	
	while(i <= n){
		tu *= x;
		mau *= i; 
		sum += tu/mau;
		i++;
	}
	
	printf("%lf", sum);
}