#include<stdio.h>
#include<math.h>

int uocChiaHet2(int n){
	int i;
	int count = 0;
	if(n % 2 == 0){
		count = 1;
		for(i = 2; i * i <= n; i++){
			if(n % i == 0){
				if(i % 2 == 0){
					count++;
				}
				if((n/i) % 2 == 0){
					if(i != n/i){
						count++;	
					}
				}
			}
		}
	}
	return count;
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		printf("%d\n", uocChiaHet2(n));
	}
	return 0;
}