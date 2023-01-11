#include<stdio.h>

int a[1000000];

void swap(int *a, int *b){
	int temp = *b;
	*b = *a; 
	*a = temp;
}
void bubbleSort(int a[], int n){
	int i,j;
	for(i = 0; i < n; i++){
		for(j = n - 1; j > i; j--){
			if(a[j] < a[j - 1]){
				swap(&a[j], &a[j - 1]);
			}
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int i,j;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
		bubbleSort(a, i + 1);
		printf("Buoc %d: ", i);
		for(j = 0; j <= i; j++){
			printf("%d ", a[j]);
		}
		if(i < n - 1){
			printf("\n");
		}
	}
	return 0;
}