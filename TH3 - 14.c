/* Liet ke cac so co 8 chu so dong thoi thoa man cac dieu kien
- La so nguyen to
- Chi chua chu so nguyen to
- Tong cac chu so cua no la mot so nguyen to 
*/

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool ngTo(int n){
	if ( n < 2 ){ return false;
	}
	int i;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0){ return false;
		}	
	}
	return true;
}

bool chuSoNgTo(int n){
	int cs = 0;
	while(n > 0){
		cs = n % 10;
		n /= 10;
		if( !ngTo(cs) ){
			return false;
		}
	}
	return true;
}

bool tongChuSoNgTo( int n ){
	unsigned int sum = 0;
	while ( n > 0 ){
		sum += n % 10;
		n /= 10;
	}
	if(ngTo(sum)){ return true;
	}
	return false;	
}

int main(){
	printf("Cac so co 8 chu so thoa man cac dieu kien : \n- La so nguyen to  \n- Chi chua chu so nguyen to  \n- Tong cac chu so cua no la mot so nguyen to\n");
	int i;
	for ( i = 20000000 ; i <= 77777777 ; i++){
		if(ngTo(i) && chuSoNgTo(i) && tongChuSoNgTo(i)){
			printf("%10d", i);
		}
	}
	return 0;
}


