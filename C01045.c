#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int end = n % 10;
	int begin = 0;
	while(n > 0){
		begin = n % 10;
		n /= 10;
	}
	printf("%d %d", begin, end);
	return 0;
}