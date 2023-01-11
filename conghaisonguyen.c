// Chuong trinh cong hai so nguyen
#include<stdio.h>

int main(){
	// Khai bao bien
	int number1;
	int number2;
	// Nhap du lieu vao, luu o cac bien
	puts("Nhap so nguyen thu nhat");
	scanf("%d", &number1);
	
	puts("Nhap so nguyen thu hai");
	scanf("%d", &number2);
	// Cong hai so nguyen
	int sum = number1 + number2;
	// Hien thi ra ket qua
	printf ("%d + %d = %d,\n", number1, number2, sum);

}
