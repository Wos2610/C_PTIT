#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int minr = 9999999;
	int minc = 9999999;
	int i;
	for(i = 0; i < n; i++){
		int a, b;
		scanf("%d%d", &a, &b);
		if(a < minr){
			minr = a;
		}
		if(b < minc){
			minc = b;
		}
	}
	long long ans = (long long)minc * minr;
	printf("%lld", ans);
}