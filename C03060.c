#include<stdio.h>

int main(){
	int n,k;
	scanf("%d%d", &n, &k);
	int i;
	int count = 0;
	for(i = 2; i <= n; i++){
		int m = i;
		while(m % 2 == 0){
			count++;
			if(count == k){
				break;
			}
			m /= 2;
		}
		if(count == k){
			break;
		}
	}
	if(count == k){
		printf("Yes");
	}
	else{
		printf("No");
	}
}