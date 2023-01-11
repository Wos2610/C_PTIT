#include<stdio.h>

int thuanNghich(int n){
	int m = n;
	int dao = 0;
	int cs = 0;
	while(n > 0){
		cs = n % 10;
		if(cs == 9){
			return 0;
		}
		dao = dao * 10 + cs;
		n /= 10;
	}
	if(dao == m){
		return 1;
	}
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	int count = 0;
	int i;
	for(i = 2; i < n; i++){
		if(thuanNghich(i)){
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d", count);
	return 0;
}