#include<stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		int last = n % 10;
		int begin = 0;
		while(n > 0){
			begin = n % 10;
			n /= 10;
		}
		if(last == begin){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}