#include<stdio.h>
#include<stdlib.h>

int a[10000] = {0};

void check(int a[], int n, int k){
	int i;
	int sum = 0;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
		sum += a[i];
	}
	if(sum % k != 0){
		printf("0\n");
	}
	else{
		printf("1\n");
	}
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n, k;
		scanf("%d%d", &n, &k);
		check(a, n, k);
	}
	return 0;
}