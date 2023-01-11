#include<stdio.h>
#include<stdbool.h>

bool ngTo(int n){
	int i;
	if(n <= 1){
		return false;
	}
	else{
		int i;
		for(int i = 2; i*i <= n; i++){
			if(n % i == 0){
				return false;
			}
		}
	}
	return true;
}
int main(){
	int n;
	scanf("%d", &n);
	if(ngTo(n)){
		printf("YES");
	}
	else{ 
		printf("NO");
	}
	return 0;
}