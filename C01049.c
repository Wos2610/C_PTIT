#include<stdio.h>

int chanLe(int n){
	if(n % 2 == 0){
		return 1;
	}
	return 0;
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		int countL = 0;
		int countC = 0;
		int cs = 0;
		while(n > 0){
			cs = n % 10;
			n /= 10;
			if(chanLe(cs)){
				countC++;
			}
			else{
				countL++;
			}
		}
		printf("%d %d\n", countL, countC);
	}
	return 0;
}