#include<stdio.h>
#include<math.h>

struct Point{
	double x;
	double y;
};

struct Point f1, f2, f3;

int isTriangle(double a, double b, double c){
	if(a == 0 || b == 0 || c == 0){
		return 0;
	}
	if(a + b <= c || a + c <= b || b + c <= a){
		return 0;
	}
	return 1;
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		scanf("%lf%lf%lf%lf%lf%lf",&f1.x, &f1.y, &f2.x, &f2.y, &f3.x, &f3.y);
		double a = sqrt((f1.x - f2.x) * (f1.x - f2.x) + (f1.y - f2.y) * (f1.y - f2.y));
		double b = sqrt((f1.x - f3.x) * (f1.x - f3.x) + (f1.y - f3.y) * (f1.y - f3.y));
		double c = sqrt((f3.x - f2.x) * (f3.x - f2.x) + (f3.y - f2.y) * (f3.y - f2.y));
		if(isTriangle(a,b,c) == 0){
			printf("INVALID\n");
		}
		else{
			double p = (a + b + c)/2.0;
			double s = sqrt(p * (p - a) * ( p - b) * (p - c));
			printf("%0.2lf\n", s);
		}
	}
}