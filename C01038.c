#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int dao = 0;
	int count = 0;
	int a[20]= {0};
	while(n > 0){
		a[count] = n % 10;
		n /= 10;
		count++;
	}
	dao = a[0];
	int i;
	for(i = count - 2; i >= 1; i--){
		dao = dao * 10 + a[i];
	}
	dao = dao * 10 + a[count - 1];
	printf("%d", dao);
	return 0;
}