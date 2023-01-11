#include<stdio.h>

int a[1000000] = {0};

void kTra(int a[], int n){
	int i;
	int count = 0;
	for(i = 0; i < n; i++){
		if(a[i] == a[i + 1]){
			count++;
		}
	}
	printf("%d\n", count);
}
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		int i;
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		kTra(a, n);
	}
	return 0;
}