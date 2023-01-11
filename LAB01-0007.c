#include<stdio.h>

int a[1000000] = {0};
int main(){
	int n;
	scanf("%d", &n);
	long long sum = 0;
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++){
		sum += a[i];
	}
	printf("%0.3f", (float)sum/n);
	return 0;
}