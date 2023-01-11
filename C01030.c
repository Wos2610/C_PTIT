#include<stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	while(T > 0){
		int n;
		scanf("%d", &n);
		int i;
		for(i = 2; i*i <= n; i++){
			while(n % i == 0){
				printf("%d ", i);
				n /= i;
			}
		}
		if(n != 1){
			printf("%d", n);
		}
		printf("\n");
		T--;
	}
	return 0;
}