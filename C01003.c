#include<stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	while(T > 0){
		int n;
		scanf("%d", &n);
		printf("%lld\n", (long long)n*n);
		T--;
	}
	return 0;
}