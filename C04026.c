#include<stdio.h>

int a[1000000];

void exchangeSort(int a[], int n){
	int i,j;
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
		printf("Buoc %d: ", i + 1);
		for(j = 0; j < n; j++){
			printf("%d ", a[j]);
		}
		printf("\n");
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	exchangeSort(a, n);
	return 0;
}