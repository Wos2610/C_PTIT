#include<stdio.h>

int a[1000000] = {0};
int save[1000000] = {0};
int count[1000000] = {0};
int ngTo(int n){
	if(n < 2){
		return 0;
	}
	int i;
	for(i = 2; i * i <= n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int xH(int save[], int count, int x){
	int i;
	for(i = 0; i <= count; i++){
		if(x == save[i]){
			return 1;
		}
	}
	return 0;
}

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
}

void kTra(int a[], int n){
	int i,j;
	int index = -1;
	for(i = 0; i < n; i++){
		if(ngTo(a[i])){
			index++;
			save[index] = a[i];
		}
	}
	printf("%d ", index + 1);
	for(i = 0; i <= index; i++){
		printf("%d ",save[i]);
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