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

void kTra(int n){
	int i,j;
	int m = n/2;
	for(i = 2; i <= m; i++){
		if(ngTo(i) && ngTo(n - i)){
			printf("%d %d ", i, n - i);
		}
	}
	printf("\n");
}
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		kTra(n);
	}
	return 0;
}