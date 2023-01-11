// Viet menu tinh tong, hieu, tich, chai nguyen, chia du hai so nguyen 
// Su dung switch - case va do - while
#include<stdio.h>

int main(){
	int option,a,b;
	do{
	printf("   \n=========MENU=========\n 1. Cong hai so nguyen\n 2. Tru hai so nguyen\n 3. Nhan hai so nguyen\n 4. Chia nguyen hai so nguyen\n 5. Chia du hai so nguyen\n 6. Thoat\n");
    printf("Nhap vao lua chon cua ban : ");
    scanf("%d", &option);
    
    switch(option){
    	case 1 : 
    		{printf("Nhap vao 2 so nguyen : ");
    		scanf("%d%d",&a, &b);
    		printf("\n%d + %d = %d",a, b, a + b);}
			break;
	    case 2 : 
    		{printf("Nhap vao 2 so nguyen : ");
    		scanf("%d%d",&a, &b);
    		printf("\n%d - %d = %d",a, b, a - b);}
			break;
		case 3 : 
    		{printf("Nhap vao 2 so nguyen : ");
    		scanf("%d%d",&a, &b);
    		printf("\n%d * %d = %d",a, b, a * b);}
			break;
		case 4 : 
    		{printf("Nhap vao 2 so nguyen : ");
    		scanf("%d%d",&a, &b);
    		printf("\n%d / %d = %d",a, b, a / b);}
			break;
		case 5 : 
		    {char c = '\%';
    		printf("Nhap vao 2 so nguyen : ");
    		scanf("%d%d",&a, &b);
    		printf("\n%d %c %d = %d",a, c, b, a % b);}
			break;
		case 6 : 
			break;
		}
	} while(option != 6);
	return 0;
	}
