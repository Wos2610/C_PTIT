#include<stdio.h>

void pTNgTo(int n){
	int save[100000] = {0};
	int i;
	int index = -1;
	for(i = 2; i * i <= n; i++){
		if(n % i == 0){
			index++;
		}
		while(n % i == 0){
			if(save[index] == 0){
				save[index] = i;
			}
			n /= i;
		}
	}
	if(n != 1){
		index++;
		save[index] = n;
	}
	long long sum = 1;
	for(i = 0; i <= index; i++){
		sum *= save[i];
	}
	printf("%lld", sum);
	printf("\n");
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		pTNgTo(n);
	}
	return 0;
}