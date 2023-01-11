#include<stdio.h>

int main(){
	float C;
	scanf("%f", &C);
	float F = (C * 9 / 5) + 32;
	printf("%0.2f", F);
	return 0;
}