#include<stdio.h>

int main(){
	int T ;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		int m = n;
		int save[100000] = {0};
		int count[100000] = {0};
		int index = -1 ;
		int i ;
		for(i = 2; i * i <= n; i++){
			if(n % i == 0){
				index++;
			}
			while(n % i == 0){
				if(save[index] == 0){
				 	save[index] = i;
					count[index] = 1;
				}
				else{
					count[index]++;
				}
				n /= i;
			}
		}
		if(n != 1){
			index++;
			save[index] = n;
			count[index] = 1;
		}
		printf("%d = ", m);
		for(i = 0; i <= index ; i++){
			printf("%d^%d", save[i], count[i]);
			if(save[i + 1] != 0){
				printf(" * ");
			}
		}
		printf("\n");
	}
	return 0;
}