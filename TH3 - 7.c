// Viet cac so thuan nghich co 8 chu so chia het cho k

#include<stdio.h>

int main(){
	int k;
	printf("Nhap vao so nguyen duong k : ");
	scanf("%d", &k);
	
	if( k > 0 ){
	    unsigned long long n;
		for ( n = 10000000 ; n <= 99999999; n++){
		unsigned long long m = n;
		unsigned long long dao = 0;
		    while ( m > 0 ){
		    dao = dao * 10 + m % 10 ;
		    m /= 10; }
			if ( dao == n ){
				if ( dao % k == 0){ printf(" %llu ", dao);
				}
			}
	    }
	}
	else{ printf("Vui long nhap lai so nguyen duong k ");
	}
	
	return 0;

}
