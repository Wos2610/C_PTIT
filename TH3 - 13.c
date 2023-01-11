/* Nhap vao so nguyen duong n
   Liet ke n so nguyen to dau tien
   Liet ke n so fibonacci dau tien
   Liet ke n so chinh phuong dau tien
*/

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int nhap(){
	int n;
	printf("Nhap vao so nguyen duong n : n = ");
	scanf("%d", &n);
	if(n <= 0){ printf("Vui long nhap lai so nguyen duong n ");
	}
}

bool ngTo(int n){
	if( n < 2){ return false;
	}
	int i;
	for ( i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

void lietKeNgTo( int n ){
	printf("%d so nguyen to dau tien : ", n);
	int a;
	while( n > 0 ){
	    if(ngTo(a)){
		    printf("%6d, ", a);
		    n--;
	    }
	a++;
    }
    printf("\n");
}

void lietKeFibonacci(int n){
	printf("%d so fibonacci dau tien : \n", n);
	long long F0 = 0, F1 = 1, Fn;
	int i;
		for(i = 0; i < n; i++){
			if( i == 0 ){ printf("F0 = 0\n");
			}
			else if ( i == 1 ){ printf("F1 = 1\n");
			}
			else{
				Fn = F0 + F1;
				F0 = F1;
				F1 = Fn;
				printf("F%d = %lld\n", i, Fn);
			}
		
		}
	}

void lietKeChinhPhuong( int n ){
	printf("%d so chinh phuong dau tien : ", n);
	unsigned long long scp = 0;
	int i;
	for( i = 1; i < n ; i++){
		scp = i * i;
		printf(" %6llu ", scp );
	
	}
}

int main(){
	int n;
	n = nhap();
	lietKeNgTo(n);
	lietKeFibonacci(n);
	lietKeChinhPhuong(n);
	return 0;
}



