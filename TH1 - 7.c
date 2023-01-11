// Tinh chu vi va dien tich duong tron

#include<stdio.h>
#define PI 3.14f
int main(){
	float r;
	printf("Nhap vao ban kinh duong tron : r = ");
	scanf("%f", &r);
	if(r<=0){ printf("Ban da nhap khong dung. Vui long nhap lai");
	}
	else{
	printf("Chu vi cua duong tron ban kinh %0.2f = %0.2f\n", r, 2 * PI * r);
	printf("Dien tich cua duong tron ban kinh %0.2f = %0.2f", r, PI * r * r);
		}
	return 0;
}
