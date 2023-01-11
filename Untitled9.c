#include <stdio.h>

int main() {
	float goc = 0;
	scanf("%f", &goc);
	int n = 0;
	scanf("%d", &n);
	float thue = 0;
	scanf("%f", &thue);
	thue /= 100;
	float sum = goc * n * (1 + thue);
	printf("%0.2f", sum);
	return 0;
}