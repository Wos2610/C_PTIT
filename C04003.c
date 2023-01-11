#include<stdio.h>

int a[1000000] = {0};
void kTra(int a[], int n){
	int i;
	for(i = 1; i <= n/2; i++){
		if(a[i] != a[n - i + 1]){
			printf("NO\n");
			return;
		}
	}
	printf("YES\n");
	return;
}
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		int i;
		for(i = 1; i <= n; i++){
			scanf("%d", &a[i]);
		}
		kTra(a, n);
	}
	return 0;
}
