// Nhap vao 3 so thuc khong am. Kiem tra xem có phai 3 canh cua tam giac khong? Tam giac can, deu, vuong.

#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c;
	printf("Nhap vao so thu nhat : a = "),
	scanf("%f",&a);
	printf("Nhap vao so thu nhat : b = "),
	scanf("%f",&b);
	printf("Nhap vao so thu nhat : c = "),
	scanf("%f",&c);
	// Kiem tra là mot tam giac
	if(a>0 && b>0 && c>0){
		if((a+b)>c && (b+c)>a && (c+a)>b )
		{
			// Kiem tra la mot tam giac can hoac deu
	        if(a==b && b==c & c==a){
		        printf("Ba so lap thanh ba canh cua mot tam giac deu\n");}
	        else if(a==b || b==c || c==a){
		        printf("Ba so lap thanh ba canh cua mot tam giac can\n");}
		    else if((pow(a,2) + pow(b,2) == pow(c,2)) || (pow(b,2) + pow(c,2) == pow(a,2)) || (pow(a,2) + pow(c,2) == pow(b,2)))
			{printf("Ba so lap thanh ba canh cua mot tam giac vuong");}
		}
		else {printf("Ba so tren khong tao thanh mot tam giac\n");}
		}
	else{printf("Vui long nhap so duong\n");}
	
	return 0;
}
