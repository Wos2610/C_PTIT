#include<stdio.h>

int ngTo(int n){
	if(n < 2){
		return 0;
	}
	int i;
	for(i = 2; i * i <= n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int a[1000000] = {0};
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		int i;
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
			if(ngTo(a[i])){
				printf("%d ", a[i]);
			}
		}
		printf("\n");
	}
}