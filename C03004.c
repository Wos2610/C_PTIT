#include<stdio.h>

int main(){
	long long a,b;
	scanf("%lld%lld", &a, &b);
	long long tich = a*b;
	while(a != 0){
		int x = a;
		a = b % a;
		b = x;
	}
	printf("%lld\n", b);
	printf("%lld", tich / b);
	return 0;
}