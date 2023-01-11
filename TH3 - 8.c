// In ra tat ca cac so nguyen to trong doan [a,b]

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool ngTo(int n);

bool ngTo( int n ){	
	if ( n < 2 ){
	return false; 
	}
	int i;
	for ( i = 2; i <= sqrt(n) ; i++){
			if( n % i == 0 ){            
				return false;
			}
		}
	return true; // Ket thuc vong lap cua i ma van chua gap return thi ham chay tiep cho den khi gap return thi moi ket thuc
}


int main(){
	float a,b;
	printf("Nhap vao hai so duong a < b : ");
	scanf("%f%f", &a, &b);
	
	if ( a < b && a > 0){
		int i;
		for ( i = a; i <= b ; i++){
			if ( ngTo(i) ){
				printf("%5d", i);
			}
		}
	}
	else { printf("Vui long nhap lai hai so duong a < b");
	}
	
	
}
