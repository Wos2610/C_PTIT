#include<stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	while(T > 0){
		int n;
		scanf("%d", &n);
		printf("%0.15lf\n", (double)1/n);
		T--;
	}
	return 0;
}