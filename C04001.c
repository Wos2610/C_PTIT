#include<stdio.h>

int a[1000000] = {0};
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		int i;
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
			if(a[i] % 2 == 0){
				printf("%d ", a[i]);
			}
		}
		printf("\n");
	}
	return 0;
}