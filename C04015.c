#include<stdio.h>

int a[1000000] = {0};
int save[1000000] = {0};
int count[1000000] = {0};

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
	int i,j;
	int index = -1;
	for(i = 0; i < n; i++){
		if(!xH(save, index, a[i])){
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
		kTra(a, n);
	}
	return 0;
}