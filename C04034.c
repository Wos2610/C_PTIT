#include<stdio.h>

int a[1000000] = {0};
int save[1000000] = {0};
int isMax(int x, int index, int n){
	int i;
	for(i = index + 1; i < n; i++){
		if(a[i] >= x){
			return 0;
		}
	}
	return 1;
}

void sort(int a[], int n){
	int i,j;
	for(i = 0; i < n; i++){
		for(j = n - 1; j > i; j--){
			if(a[j] > a[j - 1]){
				int tg = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tg;
			}
		}
	}
}

void kTra(int a[], int n){
	int i;
	int count = -1;
	for(i = 0; i < n; i++){
		if( isMax(a[i], i, n) ){
			count++;
			save[count] = a[i];
		}
	}
	sort(save, count+1);
	for(i = 0 ; i <= count ; i++){
		printf("%d ", save[i]);
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
		kTra(a, n);
	}
	return 0;
}