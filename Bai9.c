#include<stdio.h>

int a[10000] = {0};

int dem = 0;

void quayLui(int i, int n, int k, int count){
	if(count == k){
		dem++;
	}
	else{
		int j;
		for(j = i + 1; j < n; j++){
			if(a[j] > a[i]){
				quayLui(j, n, k,count + 1);
			}
		}
	}
}

int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		quayLui(i, n, k, 1);
	}
	printf("%d", dem);
	return 0;
}