#include<stdio.h>
int a[1000000] = {0};
int kTra(int a[],int index, int x){
	int i;
	for(i = index - 1; i >= 0; i--){
		if(x < a[i]){
			return 0;
		}
	}
	return 1;
}

void kiemTra(int a[], int n){
	int i;
	int count = 0;
	for(i = 0; i < n; i++){
		if(kTra(a,i,a[i])){
			count++;
		}
	}
	printf("%d\n", count);
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
		kiemTra(a, n);
	}
	
	return 0;
}