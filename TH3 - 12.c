/* Nhap vao so nguyen duong n
   Liet ke cac uoc cua n
   Dem so uoc cua n 
   Liet ke cac uoc nguyen to cua n
*/
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int nhap(){
	int n;
	printf("Nhap vao so nguyen duong n : n = ");
	scanf("%d", &n);
	if ( n <= 0 ){
		printf("Vui long nhap lai so nguyen duong n ");
	}
}

void lietKe(int n){
	int i;
	printf("Cac uoc so cua %d : ", n);
	for(i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			printf("%6d", i);
			if ( i != n / i){
				printf("%6d", n / i);
			}
			}
		}
}

int dem(int n){
	int i;
	int count = 0;
	for(i = 1; i <= sqrt(n); i++ ){
		if(n % i == 0){
			if ( i != n / i){ count += 2;
			}
			else { count++;
			}
		}
	}
	return count;
}

bool ngTo(int n){
	int i;
	if( n < 2 ){ 
	return false;
	}
	for (i = 2; i <= sqrt(n); i++){
		if( n % i == 0){ 
		    return false;
		}
	}
	return true;
}
void lietKeNgTo(int n){
	int i;
	printf("\nCac uoc nguyen to cua %d : ",n);
	for ( i = 1; i <= sqrt(n); i++){
		if( n % i == 0 ){
			if( ngTo(i) ){ printf("%6d", i);
			}
			if( ngTo(n / i) && i != ( n / i )){
				printf("%6d", n / i);
			}
		}
	}
}

int main(){
	int n;
	n = nhap();
	
	lietKe(n);
	
	printf("\nSo uoc so cua %d : %d", n, dem(n));
	
	lietKeNgTo(n);
	
	return 0;
}

