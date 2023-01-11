/*
Cho 2 so nguyen a,b
Tính tong, hieu, tich, chia nguyen
( Ep kieu cua phép chia tu nguyen sang thâp phan )
*/

#include<stdio.h>

int main(){
	int a,b;
	printf("Nhap vao gia tri cua so nguyen a :");
	scanf("%d",&a);
	printf("Nhap vao gia tri cua so nguyen b :");
	scanf("%d",&b);
	// Tong
	int sum = a + b;
	printf("a + b = %d\n", sum);
	getch();
	// Hieu
	int sub = a - b;
	printf("a - b = %d\n",sub);
	getch();
	// Nhan
	int mul = a * b;
	printf("a * b = %d\n", mul);
	getch();
	// Chia nguyen
	if(b==0){
		printf("Khong the thuc hien duoc phep chia\n");
	}
	else {
		float div = (float)a/b;
		printf("%d / %d = %f\n",a,b,div);
		getch();
}
	return 0;
}
