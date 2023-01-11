#include<stdio.h>

void isSquare(int a, int b, int c, int d){
	int canhbinh1 = (c - a)*(c - a) ;
	int canhbinh2 = (d - b)*(d - b) ;
	if(canhbinh1 == canhbinh2){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int a,b,c,d;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		isSquare(a,b,c,d);
	}
	
}