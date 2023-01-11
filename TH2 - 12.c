// Tim so Fibonacci thu n

#include<stdio.h>

int main(){
    int n;
	printf("Nhap vao gia tri n >= 0 : n = ");
	scanf("%u", &n);
	
	if( n < 0 ){ printf("Vui long nhap lai gia tri n > 0");
	}
	else {
		if(n == 0 ){
			printf("F0 = 0 ");
		}
		if(n == 1){
			printf("F1 = 1 ");
		}
		if( n > 1){
			long long F0 = 0;
			long long F1 = 1;
			unsigned int count = 1;
			long long Fn;
			while( count < n ){
				Fn = F0 + F1;
				count++;
				F0 = F1;
				F1 = Fn;
				
			}
			printf("F%u = %lld",n, Fn);
		}
	}
	return 0;	
	
}
