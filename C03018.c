#include<stdio.h>
#include<math.h>
int isPrime(int n){
	if(n < 2){
		return 0;
	}
	int i;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int isPerfectSquare(int n){
	int x = sqrt(n);
	if(x * x == n){
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

int sumDigit(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main(){
	int a,b;
	scanf("%d%d", &a,&b);
	if(a > b){
		int temp = b;
		b = a;
		a = temp;
	}
	int i;
	for(i = a; i <= b; i++){
		if(isPrime(i) && isFibo(sumDigit(i))){
			printf("%d ", i);
		}
	}
	return 0;
}

