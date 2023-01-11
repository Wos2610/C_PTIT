#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a > b){
		int tg = b; 
		b = a; 
		a = tg;
	}
	long long sum = a;
	int i;
	for(i = a + 1; i <= b; i++){
		sum += i;
	}
	printf("%lld", sum);
	return 0;
}