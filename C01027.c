#include<stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	while(T > 0){
		int a,b;
		scanf("%d%d", &a, &b);
		while(a != 0){
			int x = a;
			a = b % a;
			b = x;
		}
		printf("%d\n", b);
		T--;
	}
	return 0;
}