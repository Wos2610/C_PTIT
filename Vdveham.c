// Vi du ve ham ( function)

#include<stdio.h>

// Khai bao nguyen mau
int max(int, int);
int sum(int, int);

// Dinh nghia ham

int max(int a, int b){
	if ( a > b){ 
	    return a;
	}
	return b;
}

int sum(int c, int d){
	return c + d;
}

void sub(int a, int b){
	printf(" %d - %d = %d", a, b, a-b);
}

int main(){
//	printf("Max cua 26 va 10 = %d", max(26,10));
sub(0,600);
	
}
