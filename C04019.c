#include<stdio.h>

int a[1000000] = {0};
int save[1000000] = {0};
int count[1000000] = {0};

int xH(int save[], int index, int x){
	int i;
	for(i = 0; i <= index; i++){
		if(x == save[i]){
			return 1;
		}
	}
	return 0;
}

void dem(int a[], int n){
	int index = -1;
	int i,j;
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
	int countmax = 0;
	for(i = 0; i <= index; i++){
		if(countmax < count[i]){
			countmax = count[i];
		}
	}
	for(i = 0; i <= index; i++){
		if(count[i] == countmax){
			printf("%d ", save[i]);
		}
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
		int countmax = 0;
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		dem(a, n);
	}
}