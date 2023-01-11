#include<stdio.h>
#include<math.h>

int main(){
	long long x1,y1,x2,y2,x3,y3;
	printf("Nhap toa do dinh A : ");
	scanf("%lld%lld", &x1, &y1);
	printf("Nhap toa do dinh B : ");
	scanf("%lld%lld", &x2, &y2);
	printf("Nhap toa do dinh C : ");
	scanf("%lld%lld", &x3, &y3);
	long long x12 = x2 - x1;
	long long y12 = y2 - y1;
	double AB = (double)sqrt(x12 * x12 + y12 * y12);
	
	long long x13 = x3 - x1;
	long long y13 = y3 - y1;
	double AC = (double)sqrt(x13 * x13 + y13 * y13);
	
	long long x23 = x3 - x2;
	long long y23 = y3 - y2;
	double BC = (double)sqrt(x23 * x23 + y23 * y23);
	
	if( (AB + AC) > BC || (AC + BC) > AB || (AB + BC) > AC ){
		if( AB == AC && AC == BC && BC == AB ){
			printf("DEU");
		}
		else if( AB == AC || AC == BC || BC == AB ){
			if( (AB*AB + BC*BC == AC*AC) || (AB*AB + AC*AC == BC*BC) || (AC*AC + BC*BC == AB*AB) ){
				printf("VUONG CAN");
			}
			else{
				printf("CAN");
			}
		}
		else if( (AB*AB + BC*BC == AC*AC) || (AB*AB + AC*AC == BC*BC) || (AC*AC + BC*BC == AB*AB) ){
			printf("VUONG");
		}
		else{
			printf("THUONG");
		}
	}
	return 0;
}
	// Bai 1
//	int a,b,c;
//	printf("Nhap vao 3 so nguyen a,b,c : ");
//	scanf("%d%d%d", &a, &b, &c);
//	if(a <= b && a <= c ){
//		printf("%d", a);
//		if(b <= c ){
//			printf(" %d ", b);
//			printf(" %d ", c);
//		}
//		else{
//			printf(" %d ", c);
//			printf(" %d ", b);
//		}
//	}
//	if(b <= c && b < a){
//		printf(" %d ", b);
//		if(a <= c ){
//			printf(" %d ", a);
//			printf(" %d ", c);
//		}
//		else{
//			printf(" %d ", c);
//			printf(" %d ", a);
//		}
//	}
//	if(c < b && c < a){
//		printf(" %d ", c);
//		if(a <= b ){
//			printf(" %d ", a);
//			printf(" %d ", b);
//		}
//		else{
//			printf(" %d ", b);
//			printf(" %d ", a);
//		}
//	}
	// Bai 2
//	long long a, b, c;
//		printf("Nhap vao a,b,c : ");
//		scanf("%lld%lld%lld", &a, &b, &c);
//		if(a == 0){
//			if(b == 0){
//				if(c == 0){
//					printf("VO SO NGHIEM");
//				}
//				else{
//					printf("VO NGHIEM");
//				}
//			}
//			else{
//				printf("%lf", (double) -c / b);
//			}
//		}
//		else{
//			double denta = b * b - 4 * a * c;
//			if(denta < 0){
//				printf("VO NGHIEM");
//			}
//			else if(denta == 0){
//				printf("%lf", (double) - b / (2 * a) );
//			}
//			else{
//				double x1, x2;
//				x1 = ( -b + sqrt(denta) ) / ( 2 * a );
//				x2 = ( -b - sqrt(denta) ) / ( 2 * a );
//				if(x1 > x2){
//					printf("%lf %lf", x2, x1);
//				}
//				if(x2 > x1){
//					printf("%lf %lf", x1, x2);
//				}
//			}
//		}
