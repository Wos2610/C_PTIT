/*
Kiem tra xem mot so nguyen n 
- Chan hay le
- Am hay duong
*/
#include<stdio.h>

int main(){
	int n,du;
	printf("Nhap vao so nguyen n\n");
	scanf("%d", &n);
	// kiem tra tinh chan, le
	du=n%2;
	if(du==0){
		printf("%d la mot so nguyen chan\n",n);
	}
	if(du==1){
		printf("%d la mot so nguyen le\n",n);
	}	
	// kiem tra am, duong
	if(n>0){
		printf("%d la mot so nguyen duong\n",n);
	}
	else if(n==0){
		printf("%d la mot so nguyen khong am khong duong\n",n);
	}
	else{
		printf("%d la mot so nguyen am",n);
	}
    return 0;
	} 

	

