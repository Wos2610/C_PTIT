/* Viet chuong trinh thuc hien cac chuc nang
a ) Nhap vao so nguyen duong n
b ) Tinh tong cac chu so cua n
c ) Phan tich n ra thanh cac thua so nguyen to 
*/

#include<stdio.h>

int nhap( int n );

int nhap( int n ){
	printf("Nhap vao so nguyen duong n : n = ");
	scanf("%d", &n);
	if ( n <= 0 ){ printf("Vui long nhap lai so nguyen duong n ");
	}
	return n;
}

int tong ( int n );

int tong( int n ){
	int sum = 0;
	while ( n > 0 ){
	sum += n % 10;
	n /= 10;
	}
	return sum;
}

void ngTo( int n );

void ngTo( int n ){
	int i = 2;
	while ( i <= n ){	
	if ( n % i == 0){
		printf(" %d ", i);
		if( n != i ){ printf("x");
		}
		n /= i;
	}
	else { i++;
	}
}
}

int main(){  
    int option;
    do {
	int n;
	printf(" --------- MENU ---------- \n 1) Nhap vao so nguyen duong n \n 2) Tinh tong cac chu so cua n \n 3) Phan tich n ra thanh cac thua so nguyen to\n ");
    printf("Nhap vao lua chon cua ban : ");
    scanf("%d", &option);
	switch( option ){
    	    case 1 : {
    	     	n = nhap(n); }
			    break;
		   
		    case 2 : {	
			    int sum = tong ( n );
		    	printf("Tong cac chu so cua %d : %d\n", n, sum);}
				break;
			
			case 3 : {
				printf("Phan tich %d ra thua so nguyen to : ", n);
				ngTo( n );}
				printf("\n");
				break;
			
		}
	} while ( option > 0);
return 0;
}
