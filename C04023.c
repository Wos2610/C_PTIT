#include<stdio.h>

int a[1000000] = {0};

void sort(int a[], int n){
	int i,j;
	for(i = 0; i < n; i++){
		for(j = n - 1; j > i; j--){
			if(a[j] < a[j - 1]){
				int tg = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tg;
			}
		}
	}
	for(i = 0; i < n; i++){
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
	sort(a, n);
	return 0;
}