// Bien luan nghiem cua phuong trinh bac hai ax^2 +bx +c = 0

#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,x,delta,x1,x2;
	printf("Nhap vao gia tri cua a: a = " );
	scanf("%f", &a);
	printf("Nhap vao gia tri cua b: b = " );
	scanf("%f", &b);
	printf("Nhap vao gia tri cua c: c = " );
	scanf("%f", &c);
	printf("Ta co phuong trinh : %0.2f*x^2 + %0.2f*x + %0.2f = 0\n",a,b,c);
	getch();
	if(a==0){
		if(b==0 && c==0){printf("Phuong trinh co vo so nghiem");}
		else if(b==0 && c!=0){printf("Phuong trinh vo nghiem");}
		else {
			x = -c/b;
			printf("Phuong trinh co nghiem duy nhat x = %0.2f",x);}
		}
	else {
		delta = pow(b,2) - 4*a*c;
		if(delta > 0){
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2*a);
			printf("Phuong trinh co hai nghiem phan biet : x1 = %0.2f, x2 = %0.2f",x1,x2);
		}
		else if(delta == 0){
			x = -b/(2*a);
			printf("Phuong trinh co mot nghiem kep : x = %0.2f",x);}
		else{
			printf("Phuong trinh vo nghiem");
		}
		
	}	
	return 0;
	}
	
	
