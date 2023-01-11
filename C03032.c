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

int csNgTo(int n){
	while(n > 0){
		int cs = n % 10;
		if(!ngTo(cs)){
			return 0;
		}
		n /= 10;
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
			if( (ngTo(i)) && csNgTo(i) ){
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}