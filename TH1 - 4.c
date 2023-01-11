// So sanh 2 so nguyen a, b

#include<stdio.h>

int main(){
	// Nhap vao hai so nguyen
	int a,b;
	printf("Nhap vao so nguyen thu nhat : ");
	scanf("%d", &a);
	printf("Nhap vao so nguyen thu hai  : ");
	scanf("%d", &b);
	// So sanh hai so nguyen
	if(a>b){printf("%d > %d",a,b);
	}
	else if(a<b){printf("%d < %d",a,b);
	}
	else {printf("%d = %d",a,b);
	}
		return 0;
	}

	
