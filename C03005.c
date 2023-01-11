#include<stdio.h>

int ucln(int a, int b){
	while(a != 0){
		int x = a;
		a = b % a;
		b = x;
	}
	return b;
}

int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	int i,j;
	for(i = a; i <= b; i++){
		for(j = i + 1; j <= b; j++){
			if(ucln(i,j) == 1){
				printf("(%d,%d)\n", i,j);
			}
		}
	}
	return 0;
}