#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(){
	double n;
	scanf("%lf", &n);
	double xacSuat = 0.5*(n - 2)/(n - 1) + 1/(n - 1);
	printf("%lf", xacSuat);
}
