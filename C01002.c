#include<stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	while(T > 0){
		int n;
		scanf("%d", &n);
		printf("%d\n", 2*n);
		T--;
	}
	return 0;
}