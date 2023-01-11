#include<stdio.h>

int sumDigit(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	int suma = sumDigit(a);
	int sumb = sumDigit(b);
	if(suma <= sumb){
		printf("%d %d", a, b);
	}
	else{
		printf("%d %d", b, a);
	}
	return 0;
}