#include<stdio.h>

long long ucln(long long a, long long b){
	while(a != 0){
		int x = a;
		a = b % a;
		b = x;
	}
	return b;
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int a,b,c,d;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if(ucln(a,b) ==ucln(c,d)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	
	return 0;
}