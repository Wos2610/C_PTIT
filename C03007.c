#include<stdio.h>

int ngTo(int n){
	if(n < 2){
		return 0;
	}
	int i;
	for(i = 2; i*i <= n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int thuanNghich(int n){
	int cs[10] = {0};
	int len = 0;
	while(n > 0){
		cs[len] = n % 10;
		len++;
		n /= 10;
	}
	int i;
	for(i = 0; i < len; i++){
		if(cs[i] != cs[len - i - 1]){
			return 0;
		}
	}
	return 1;
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int a,b;
		scanf("%d%d", &a, &b);
		int count = 0;
		int i;
		for(i = a; i <= b; i++){
			if((ngTo(i)) && thuanNghich(i)){
				printf("%d ", i);
				count++;
				if(count >= 10){
					printf("\n");
					count = 0;
				}
			}
		}
		printf("\n");
	}
	return 0;
}