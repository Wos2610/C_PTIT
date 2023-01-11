#include<stdio.h>


int lcm(int a, int b){
	int tich = a * b;
	while(a != 0){
		int x = a;
		a = b % a;
		b = x;	
	}
	return tich/b;
}

void process(){
	int n;
	scanf("%d", &n);
	int a[1006] = {0};
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	int b[1006] = {0};
	b[1] = a[1];
	for(int i = 2; i <= n; i++){
		b[i] = lcm(a[i - 1], a[i]);
	}
	b[n + 1] = a[n];
	for(int i = 1; i <= n + 1; i++){
		printf("%d ", b[i]);
	}
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		process();
		printf("\n");
	}
}