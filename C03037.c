#include<stdio.h>
#include<stdbool.h>

int a[10] = {2, 3, 5, 7};
int count[10] = {0};
void csNgTo(long long n){
	int i;
	while(n > 0){
		int cs = n % 10;
		n /= 10;
		for(i = 0; i < 4; i++){
			if(cs == a[i]){
				count[i]++;	
			}
		}
	}
	for(i = 0; i < 4; i++){
		if(count[i] != 0){
			printf("%d %d\n", a[i], count[i]);
		}
	}
}

int main(){
	long long n;
	scanf("%lld", &n);
	csNgTo(n);
	return 0;
}