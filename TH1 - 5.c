// Tim so lon nhat trong 4 so

#include<stdio.h>
// Cach 1
//int main(){
//	int a,b,c,d,max;
//	printf("Nhap vao gia tri cua a : a = ");
//	scanf("%d", &a);
//	printf("Nhap vao gia tri cua b : b = ");
//	scanf("%d", &b);
//	printf("Nhap vao gia tri cua c : c = ");
//	scanf("%d", &c);
//	printf("Nhap vao gia tri cua d : d = ");
//	scanf("%d", &d);
//	// so sanh
//	if(a>b,a>c,a>d){
//		max = a;
//		printf("Gia tri lon nhat la a= %d",a);
//    }	
//
//	else if(b>a,b>c,b>d){
//		max = b;
//		printf("Gia tri lon nhat la b= %d",b);
//	}
//	else if(c>b,c>a,c>d){
//		max = c;
//		printf("Gia tri lon nhat la c= %d",c);
//	}
//	else if(d>b,d>a,d>c){
//		max = d;
//		printf("Gia tri lon nhat la d= %d",d);
//	}
//	else if(a==b,a==c,a==d){
//		printf("Khong co so lon nhat");
//	}
//return 0;	
//}

// Cach 2
int main(){
	int a,b,c,d,max;
	printf("Nhap vao gia tri cua a : a = ");
	scanf("%d", &a);
	printf("Nhap vao gia tri cua b : b = ");
	scanf("%d", &b);
	printf("Nhap vao gia tri cua c : c = ");
	scanf("%d", &c);
	printf("Nhap vao gia tri cua d : d = ");
	scanf("%d", &d);
	
	if(a>b){ max = a;
	}
	else { max = b;
	}
	if(max<c){ max=c;
	}
	if(max<d){ max=d;
	}
	if(a==b,b==c,c==d){ printf("Khong co gia tri lon nhat");
	}
	else {
	printf("Gia tri lon nhat : %d",max);}
	return 0;
}
