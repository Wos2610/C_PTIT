#include<stdio.h>

int a[1000006] = {0};

void bubbleSort(int a[], int n){
	int i,j,k;
	int count = 0;
	for(i = n - 1; i >= 0; i--){
		int count = 0;
		for(j = 0; j < i; j++){
			if(a[j + 1] < a[j]){
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
			else{
				count++;
			}
		}
		if(count == i){
			return;
		}
		printf("Buoc %d: ", n - i);
		for(k = 0; k < n; k++){
			printf("%d ", a[k]);
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
	bubbleSort(a,n);
}