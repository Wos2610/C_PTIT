// Tim UCLN va BCNN cua 2 so nguyen a,b

#include<stdio.h>

int main(){
	int a,b,i;
	printf("Nhap vao so nguyen a : ");
	scanf("%d", &a);
	printf("Nhap vao so nguyen b : ");
	scanf("%d", &b);
	
	if(a==0 && b==0){
		printf("Khong ton tai UCLN va BCNN cua %d va %d ", a,b);
	}
	else if(a==0 || b==0){
		int UCLN;
		if(a == 0 ){ UCLN = b;
			printf("Khong ton tai BCNN, UCLN = %d", b);}
	    else{ UCLN = a;
		printf(" Khong ton tai BCNN , UCLN = %d",a);}
		}	
	else if(a>0 && b>0){
		 int tich = a * b;
		// Cach1
	    while(a != b){
	    	if(a > b){ a = a - b;}
	    	else { b = b-a;}
			} // Ket thuc vong lap a == b
		printf("UCLN = %d, BCNN = %d", a, tich/a);
		// Cach 2
//		while (b != 0){
//			int x = b;
//			b = a % b;
//			a = x;}
//		printf("UCLN = %d, BCNN = %d",a, tich/a);
		}
	else {
		unsigned int A = -a;
		unsigned int B = -b;
		int TICH = A * B;
		 while(A != B){
	    	if(A > B){ A = A - B;}
	    	else { B = B - A;}
			} // Ket thuc vong lap A == B
		printf("UCLN = %d, BCNN = -%d", A, TICH/A);
	
	}
		return 0;
    }
	
	
	
	
		


