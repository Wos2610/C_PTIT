#include<stdio.h>

int main(){
	int T ;
	scanf("%d", &T);
	int T1 = T;
	while(T--){
		int n;
		scanf("%d", &n);
		int m = n;
		printf("Test %d: ", T1 - T);
		int save[100000] = {0};
		int count[100000] = {0};
		int i ;
		for(i = 2; i * i <= n; i++){
			while(n % i == 0){
				save[i] = i;
				count[i]++;
				n /= i;
			}
		}
		for(i = 2; i * i <= m; i++){
			if(save[i] != 0){
				printf("%d(%d) ", i, count[i]);
			}
		}
		if(n != 1){
			printf("%d(%d) ", n, 1);
		}
		printf("\n");
	}
}