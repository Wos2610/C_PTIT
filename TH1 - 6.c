/*
Nhap vao hai canh hinh chu nhat
Tinh chu vi va dien tich cua hinh chu nhat
*/
 
#include<stdio.h>

int main(){
	float a,b,cv,dt;
	printf("Nhap vao gia tri hai canh hinh chu nhat :");
	scanf("%f %f", &a, &b);
	cv = (a + b)*2;
	dt = a * b;
	printf("Chu vi cua hinh chu nhat : %0.2f\n",cv);
	printf("Dien tich cua hinh chu nhat : %0.2f",dt);
	return 0;

}
