// So Fibonacci bang de quy

#include<stdio.h>

unsigned long long fibo(int);

unsigned long long fibo( int n ){
	if(n == 0 || n == 1){
		return n;
	}
	else{
		return fibo( n - 2) + fibo( n - 1 );
	}
}

int main(){
	int i;
	for( i = 0; i <= 20; i++){
		printf("fibo(%d) = %lld\n", i, fibo(i) );
	}
}
