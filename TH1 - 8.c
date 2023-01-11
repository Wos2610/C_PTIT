// Giai va bien luan phuong trinh bac nhat ax+b=0

#include<stdio.h>

int main(){
	float a,b,x;
	printf("Nhap vao gia tri cua a : a = ");
	scanf("%f",&a);
	printf("Nhap vao gia tri cua b : b = ");
	scanf("%f",&b);
	printf("Ta co phuong trinh : %0.2f*x+%0.2f=0\n",a,b);
	if(a==0 && b!=0){printf("Phuong trinh vo nghiem");
	}
	else if(a==0 && b==0){printf("Phuong trinh co vo so nghiem");
	}
	else { 
	x = -b/a;
	printf("Phuong trinh co mot nghiem duy nhat x = %0.2f", x);}
	return 0;
}
