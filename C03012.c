#include<stdio.h>
#include<math.h>

int isPerfectSquare(int n){
	int can = sqrt(n);
	if(can*can == n){
		return 1;
	}
	return 0;
}

int isFibo(int n){
	if(isPerfectSquare(5*n*n - 4) || isPerfectSquare(5*n*n + 4)){
		return 1;
	}
	return 0;
}
int main(){
	int n;
	scanf("%d", &n);
	if(isFibo(n)){
		printf("1");
	}
	else{
		printf("0");
	}
	return 0;
}