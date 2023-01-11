/* Liet ke so co 8 chu so thoa man cac dieu kien
- la so thuan nghich 
- Khong chua chu so 6
- Tong cac chu so la so nguyen to */

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool thuanNghich(int n){
	int m = n;
	int dao = 0;
	while (n > 0){
		dao = dao * 10 + n % 10;
		n /= 10;
	}
	if(dao == m){ return true;
	}
	return false;
}

bool khong6(int n){
	int cs;
	while ( n > 0 ){
		cs = n % 10;
		n /= 10;
		if ( cs == 6){ return false;
		}
	}
	return true;
}

bool ngTo(int n){
	if(n < 2){ return false;
	}
	int i;
	for(i = 2; i <= sqrt(n); i++){
		if( n % i == 0){
			return false;
		}
	}
	return true;
}

bool tongChuSoNgTo( int n ){
	int sum = 0;
	while( n > 0){
		sum += n % 10;
		n /= 10; 
	}
	if( ngTo(sum)){ return true;
	}
	return false;
}

int main(){
	printf("Cac so co 8 chu so thoa man cac dieu kien \n- la so thuan nghich  \n- Khong chua chu so 6 \n- Tong cac chu so la so nguyen to\n");
	int i;
	for( i = 10000000; i <= 99999999; i++){
		if( thuanNghich(i) && khong6(i) && tongChuSoNgTo(i)){
			printf("%10d", i);
		}
	}
	return 0;
}
