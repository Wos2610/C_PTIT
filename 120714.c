#include<stdio.h>

int main(){
	int a, k, n;
	scanf("%d%d%d", &a, &k, &n);
	
	int sum = 1;
	int mark = 0;
	for(int i = 1; ; i++){
		sum = i*k;
		if(sum > n){
			break;
		}
		if(sum - a > 0){
			mark = 1;
			printf("%d ", sum - a);
		}
	}
	if(mark == 0){
		printf("-1");
	}
}