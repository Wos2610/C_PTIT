#include<stdio.h>

int a[1000000] = {0};
int b[1000000] = {0};

void dichTrai(int a[], int n, int k){
	int i;
	int count = 0;
	k = k % n;
	for(i = k; i < n; i++){
		b[count] = a[i];
		count++;
	}
	for(i = 0; i < k ; i++){
		b[count] = a[i];
		count++;
	}
	for(i = 0; i < count ; i++){
		printf("%d ", b[i]);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int k;
	scanf("%d", &k);
	dichTrai(a, n, k);
	return 0;
}