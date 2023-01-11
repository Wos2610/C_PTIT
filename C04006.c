#include<stdio.h>

int a[1000000] = {0};
void dao(int a[], int n){
	int i;
	for(i = n - 1; i >= 0; i--){
		printf("%d ", a[i]);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	dao(a, n);
	return 0;
}