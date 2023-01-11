#include<stdio.h>

int a[10000] = {0};

int dem = 0;

void quayLui(int n, int k){
	int i,j,p;
	for(i = 0; i < n - k + 1; i++){
		for(j = i + 1; j < n - k + 2; j++){
			if(a[j] > a[i]){
				for(p = j + 1; p < n; p++){
					if(a[p] > a[j]){
						dem++;
					}
				}
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
	quayLui(n,k);
	printf("%d", dem);
	return 0;
}