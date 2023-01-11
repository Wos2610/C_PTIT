#include<stdio.h>

int a[1000000];
int even[1000000];
int odd[1000000];

void sort(int a[], int n){
	int i,j;
	for(i = 0; i < n; i++){
		for(j = n - 1; j > i; j--){
			if(a[j] < a[j - 1]){
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
}

void check(int a[], int n){
	int i;
	int indexe = -1;
	int indexo = -1;
	for(i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			indexe++;
			even[indexe] = a[i];
		}
		else{
			indexo++;
			odd[indexo] = a[i];
		}
	}
	sort(even, indexe + 1);
	for(i = 0; i <= indexe; i++){
		printf("%d ", even[i]);
	}
	sort(odd, indexo + 1);
	for(i = 0; i <= indexo; i++){
		printf("%d ", odd[i]);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	check(a, n);
}