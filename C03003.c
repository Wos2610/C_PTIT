#include<stdio.h>

int ngTo(int n){
	if(n <= 1){
		return 0;
	}
	int i;
	for(i = 2; i * i <= n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

void soNgTo(int n){
	int count = 0;
	if(n >= 2){
		printf("2\n");
		count++;
	}
	int i;
	for(i = 3; ; i = i + 2 ){
		if(ngTo(i)){
			printf("%d\n", i);
			count++;
		}
		if(count == n){
			return;
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	soNgTo(n);
	return 0;
}