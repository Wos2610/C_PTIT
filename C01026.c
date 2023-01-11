#include<stdio.h>
#include<stdbool.h>

bool ngTo(int n){
	if(n <= 1){
		return false;
	}
	else{
		int i;
		for(i = 2; i*i <= n; i++){
			if(n % i == 0){
				return false;
			}
		}
	}
	return true;
}
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		if( ngTo(n) ){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}