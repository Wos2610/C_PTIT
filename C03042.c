#include<stdio.h>

int soGiam(int n){
	int cs1 = n % 10;
	int cs2 = cs1 - 1;
	while(n > 0){
		if(cs2 >= cs1){
			return 0;
		}
		cs2 = cs1; 
		n /= 10;
		cs1 = n % 10;
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
			if(soGiam(i)){
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}