#include<stdio.h>

int a[1000000];

void swap(int *a, int *b){
	int temp = *b;
	*b = *a; 
	*a = temp;
}
void exchangeSort(int a[], int n){
	int i,j;
	for(i = 0; i < n - 1; i++){
		int minindex = i;
		for(j = i + 1; j < n; j++){
			if(a[minindex] > a[j]){
				minindex = j;
			}
		}
		swap(&a[minindex], &a[i]);
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