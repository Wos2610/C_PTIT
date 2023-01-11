#include<stdio.h>

int main(){
	int a = 0;
	int b;
	while(a <= 0){
		printf("Nhap a va b voi a > 0 : ");
		scanf("%d%d", &a, &b);
	}
	float x = (float)-b / a;
	printf("Nghiem cua phuong trinh %dx + %d = 0 voi a > 0 : %0.4f",a, b, x);
	return 0;
}
