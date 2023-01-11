#include<stdio.h>

void ngTo(int n){
	int i;
	for(i = 2; i * i <= n; i++){
		while(n % i == 0){
			printf("%d", i);
			n /= i;
			if(n != 1){
				printf("x");
			}
		}
	}
	if(n != 1){
		printf("%d", n);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	ngTo(n);
	return 0;
}