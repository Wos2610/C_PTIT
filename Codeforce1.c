#include<stdio.h>
#include<math.h>

int main(){
	long long a,b,c;
	scanf("%lld%lld%lld", &a, &b, &c);
	float x,x0, x1, x2;
	if(a == 0){
		if(b == 0 && c != 0){
			printf("VO NGHIEM");
		}
		else if(b == 0 && c == 0){
			printf("VO SO NGHIEM");
		}
		else{
			x = (float) -c/b;
			printf("%0.2f", x);
		}
	}
	else{
		float denta = (float)b * b - 4 * a * c;
		if(denta < 0){
			printf("VO NGHIEM");
		}
		else if(denta == 0){
			x0 = (float) -b/(2 * a);
			printf("%0.2f", x0);
		}
		else{
			x1 = (float)(-b + sqrt(denta)) / (2 * a);
			x2 = (float)(-b - sqrt(denta)) / (2 * a);
			if(x1 > x2){
				printf("%0.2f %0.2f", x1, x2);
			}
			if(x2 > x1){
				printf("%0.2f %0.2f", x2, x1);
			}
		}
	}	
	return 0;
}
	// Bai A
//	printf("\"Hello ProPTIT'\"");         // Su dung \" de ctrinh in ra dau "
	// Bai B
//	int a;
//	scanf("%d", &a);
//	printf("%d", 2019 - a);
	// Bai C
//	float x;
//	scanf("%f", &x);
//	x = floor (x);
//	int n1 = (int) x;
//	int n2 = n1 + 1;
//	printf("%d %d", n1, n2); 
	// Bai D
//	int n;
//	scanf("%d", &n);
//	if( ((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0) ){
//		printf("YES");
//	}
//	else{
//		printf("NO");
//	}
	// Bai E
//	long n;
//	scanf("%ld", &n);
//	int ho, mi, se;
//	ho = n / 3600;
//	n = n - 3600 * ho;
//	mi = n / 60;
//	se = n - 60 * mi;
//	printf("%02d:%02d:%02d", ho, mi, se);
	// Bai F
//	int h,w;
//	scanf("%d %d", &h, &w);
//	float bmi = (float) w / (h * h);
//	if( bmi < 0.00185 ){ 
//		printf("Thieu can");
//	}
//	if( bmi >= 0.00185 && bmi < 0.0025){
//		printf("Trung binh");
//	}
//	if(bmi >= 0.0025 && bmi < 0.003){
//		printf("Thua can");
//	}
//	if(bmi >= 0.003){
//		printf("Beo phi");
//	}
	// Bai G
//	long long a, b;
//	scanf("%lld%lld", &a, &b);
//	float x = (float)-b/a;
//	printf("%0.6f", x);
	// Bai H
//	int n, u1, d;
//	scanf("%d%d%d", &n, &u1, &d);
//	long long sum = u1 * n + n * (n - 1) * d / 2;
//	printf("%lld", sum);
	// Bai I
	
	// Bai J
//	long long a, b, c;
//	scanf("%lld%lld%lld", &a, &b, &c);
//	if(a + b > c && b + c > a && a + c > b){
//		printf("Yes");
//	}
//	else{
//		printf("No");
//	}
	// Bai K
//	long long a, b;
//	scanf("%lld%lld", &a, &b);
//	printf("%lld", a + b);
//	printf("\n%lld", a - b);
//	printf("\n%lld", a * b);
//	printf("\n%lld", a / b);
//	printf("\n%lld", a % b);
//	printf("\n%lld", a*a*a);
	// Bai L
//	long long a,b,c;
//	scanf("%lld%lld%lld", &a, &b, &c);
//	if(a > b && a > c){
//		printf("Bong");
//	}
//	if(b > a && b > c){
//		printf("Vang");
//	}
//	if(c > b && c > a){
//		printf("La");
//	}
	// Bai M
//	long long x1, y1, x2, y2; 
//	double r1, r2;
//	scanf("%lld%lld", &x1, &y1);
//	scanf("%lld%lld", &x2, &y2);
//	scanf("%lf%lf", &r1, &r2);
//	double kctam = (double)sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) ); 
//	
//	if( kctam > (r1 + r2) ){
//		printf("Don't Cut");
//	}
//	else if(kctam == (r1 + r2) || kctam == abs(r1 - r2)){
//		printf("Touch");
//	}
//	else if( kctam > abs(r1 - r2) && kctam < (r1 + r2)){
//		printf("Cut");
//	}
//	else{
//		printf("Cut");
//	}
	// Bai N
//	long long x1, y1, x2, y2, x3, y3, x4, y4;
//	scanf("%lld%lld", &x1, &y1);
//	scanf("%lld%lld", &x2, &y2);
//	scanf("%lld%lld", &x3, &y3);
//	scanf("%lld%lld", &x4, &y4);
//	long long xAB= abs(x2 - x1);
//	long long yAB= abs(y2 - y1);
//	long long xCD= abs(x4 - x3);
//	long long yCD= abs(y4 - y3);
//	double tan1 = (float) yAB / xAB;
//	double tan2 = (float) yCD / xCD;
//	if(tan1 != tan2){
//		printf("YES!");
//	}
//	else{
//		printf("NO");
//	}
	// Bai O
//	long long a,b,c;
//	scanf("%lld%lld%lld", &a, &b, &c);
//	long long countb = b / c;
//	long long counta = a / c;
//	long long count = 0;
//	if(a > b){
//		count = 0;
//	}
//	else{
//		if(a % c != 0){
//			count = countb - counta;
//		}
//		else{
//			count = countb - counta + 1;
//		}
//	}
//	printf("%lld", count);
