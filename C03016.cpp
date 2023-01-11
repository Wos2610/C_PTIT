#include<stdio.h>
#include<math.h>

int isPerfectSquare(long long n){
	long long can = sqrt(n);
	if(can * can == n){
		return 1;
	}
	return 0;
}
int isFibo(long long n){
	if(isPerfectSquare(5*n*n - 4) || isPerfectSquare(5*n*n + 4)){
		return 1;
	}
	return 0;
}
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		if(isFibo(n)){
			printf("YES");
		}
		else{
			printf("NO");
		}
		printf("\n");
	}
}
