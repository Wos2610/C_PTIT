#include<stdio.h>

int a[1006];
int mark[1006];

void bubbleSort(int a[], int n){
	for(int i = 1; i < n; i++){
		for(int j = n; j > i; j--){
			if(a[j] < a[j - 1]){
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	bubbleSort(a, n);
	for(int i = 1; i <= n; i++){
		if(mark[a[i]] == 0){
			printf("%d ", a[i]);
			mark[a[i]] = 1;
		}
	}
}