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
		if((!xH(save, index, a[i])) && ngTo(a[i])){
			index++;
			save[index] = a[i];
			count[index] = 1;
			for(j = i + 1; j < n; j++){
				if(a[j] == a[i]){
					count[index]++;
				}
			}
		}
	}
	for(i = 0; i <= index; i++){
		printf("%d xuat hien %d lan\n", save[i], count[i]);
	}
}
int main(){
	int T;
	scanf("%d", &T);
	int T1 = T;
	while(T--){
		int n;
		scanf("%d", &n);
		int i;
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		printf("Test %d:\n", T1 - T);
		sort(a, n);
		kTra(a, n);
	}
	return 0;
}