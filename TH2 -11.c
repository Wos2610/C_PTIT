// Liet ke n so nguyen to dau tien

#include<stdio.h>
#include<math.h>

int main(){
	unsigned int n;
	
	printf("Nhap vao gia tri n = ");
	scanf("%u", &n);
	
	if(n < 1){printf("Vui long nhap lai gia tri n > 0");
	}
	else{
		unsigned int count = 0;
		int a = 2;
		while ( count < n ){
		    int mark = 1;
			unsigned int i;
			for(i = 2; i <= sqrt(a); i++){
				    if( a % i == 0){
					mark = 0; 
					break;}
				}
			if( mark == 1 ){
				printf("%u ", a);
				count++;
			}
		a++;	
		}
	}
	return 0;
	}
	

