#include<stdio.h>

int a[1000000] = {0};
void isMax(int a[], int n){
	int max = 0;
	int i;
	for(i = 0; i < n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	printf("%d\n", max);
	for(i = 0; i < n; i++){
		if(a[i] == max){
			printf("%d ", i);
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
		int i;
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		isMax(a, n);
	}
	return 0;
}