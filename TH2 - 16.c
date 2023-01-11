// Liet ke cac so chinh phuong nam trong doan [m,n]

#include<stdio.h>

int main(){
	int m,n;
	printf("Nhap vao gia tri m >= 0 :  " );
	scanf("%d", &m);
	printf("Nhap vao gia tri n > m :  " );
	scanf("%d", &n);
	
	if(( m < n )&&( m >=0 )){
		int i;
		for(i = 1; i < n; i++){
			long scp = i *  i;
			if(scp >= m && scp <= n){
				printf("%ld ", scp);
			}
		}
	}
	else{
		printf("Vui long nhap lai gia tri m, n thoa man");
	}
}
