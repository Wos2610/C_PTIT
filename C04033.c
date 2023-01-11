#include<stdio.h>

int a[1000000] = {0};
int save[1000000] = {0};
int xH(int save[], int count, int x){
	int i;
	for(i = 0; i <= count; i++){
		if(x == save[i]){
			return 1;
		}
	}
	return 0;
}

void kTra(int a[], int n){
	int i;
	int count = 0;
	for(i = 0; i < n; i++){
		if(!xH(save, count, a[i])){
			count++;
			save[count] = a[i];
		}
	}
	for(i = 1; i <= count; i++){
		printf("%d ", save[i]);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	kTra(a, n);
	return 0;
}