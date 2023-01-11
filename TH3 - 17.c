/* Liet ke cac so co 5 chu so :
a ) la so chan ma cac chu so cua no khong tang tu trai qua phai
b ) La so le ma cac chu so cua no khong giam tu trai qua phai
c ) La so co tong cac chu so chan bang tong cac chu so le
*/

#include<stdio.h>
#include<stdbool.h>

bool chanLe(int n){
	if(n % 2 == 0){ return true; // la so chan
	}
	return false;  // La so le
}

bool khongTang(int n){ // cssau <= cstruoc
	int cssau = n % 10;
	n /= 10;
	int cstruoc = n % 10;
	while(n > 0){
		if(cssau > cstruoc){ return false;
		}
		cssau = cstruoc;
		n /= 10;
		cstruoc = n % 10;
	}
	return true;
}

bool khongGiam(int n){ // cssau >= cstruoc
	int cssau = n % 10;
	n /= 10;
	int cstruoc = n % 10;
	while(n > 0){
		if(cssau < cstruoc){ return false;
		}
		cssau = cstruoc;
		n /= 10;
		cstruoc = n % 10;
	}
	return true;
}

bool tongChanBangTongLe(int n){
	int cs = 0;
	int tongChan = 0;
	int tongLe = 0;
	while(n > 0){
		cs = n % 10;
		n /= 10;
		if(chanLe(cs)){
			tongChan += cs;
		}
		else{
			tongLe += cs;
		}
	}
	return tongChan == tongLe;
}

int main(){
	int i;
	printf(" Cac so CHAN ma cac chu so cua no KHONG TANG tu trai qua phai\n");
	for( i = 10000; i <= 99999; i++){
		if(chanLe(i) && khongTang(i)){
			printf("%8d", i);
		}
	}
	getch();
	printf("\n");
	
	
	printf(" Cac so LE ma cac chu so cua no KHONG GIAM tu trai qua phai\n");
	for( i = 10000; i <= 99999; i++){
		if( (!chanLe(i)) && khongGiam(i)){
			printf("%8d", i);
		}
	}
	getch();
	printf("\n");
	
	printf(" Cac so co tong cac chu so chan BANG tong cac chu so le\n");
	for( i = 10000; i <= 99999; i++){
		if(tongChanBangTongLe(i)){
			printf("%8d", i);
		}
	}
	getch();
	printf("\n");
	
	return 0;
}


