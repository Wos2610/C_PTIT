#include<stdio.h>

int a[1000000] = {0};
int b[1000000] = {0};

void dichPhai(int a[], int n, int k){
	int i;
	int count = 0;
	k = k % n;
	for(i = n - k; i < n; i++){
		b[count] = a[i];
		count++;
	}
	for(i = 0; i < n - k ; i++){
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
	dichPhai(a, n, k);
	return 0;
}