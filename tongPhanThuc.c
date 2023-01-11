#include<stdio.h>


void process(){
	int n;
	scanf("%d", &n);
	double sum = 0;
	if(n % 2 != 0){
		for(int i = 1; i <= n; i+=2){
			sum += (double)1/i;
		}
	}
	else{
		for(int i = 2; i <= n; i+=2){
			sum += (double)1/i;
		}
	}
	
	printf("%.6lf\n", sum);
	
}
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		process();
	}
}