#include<stdio.h>
#include<math.h>

struct Point{
	float x;
	float y;
};

struct Point f1, f2, f3;

int isTriangle(float a, float b, float c){
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
		scanf("%f%f%f%f%f%f",&f1.x, &f1.y, &f2.x, &f2.y, &f3.x, &f3.y);
		float a = sqrt((f1.x - f2.x) * (f1.x - f2.x) + (f1.y - f2.y) * (f1.y - f2.y));
		float b = sqrt((f1.x - f3.x) * (f1.x - f3.x) + (f1.y - f3.y) * (f1.y - f3.y));
		float c = sqrt((f3.x - f2.x) * (f3.x - f2.x) + (f3.y - f2.y) * (f3.y - f2.y));
		if(isTriangle(a,b,c) == 0){
			printf("INVALID\n");
		}
		else{
			printf("%0.3f\n", a + b + c);
		}
	}
}