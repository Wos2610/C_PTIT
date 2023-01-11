#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i;
	for(i = 1; i <= 9; i++){
		printf("%d ", i * n);
	}
	printf("%d", 10 * n);
	return 0;
}