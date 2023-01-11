#include<stdio.h>

int n, a, b;
int sumU = 0, sumD = 0;
int minU = 50006, minD = 50006;
int maxU = 0, maxD = 0;
int main(){
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d%d", &a, &b);
		sumU += a;
		sumD += b;
		if(a < minU){
			minU = a;
		}
		else if(a > maxU){
			maxU = a;
		}
		if(b < minD){
			minD = b;
		}
		else if(b > maxD){
			maxD = b;
		}
	}
	if(sumU < sumD){
		sumD += minU;
		printf("%d", sumD);
	}
	else if(sumU > sumD){
		sumU += minD;
		printf("%d", sumU);
	}
	else{
		sumU += maxD;
		sumD += maxU;
		if(sumU < sumD){
			printf("%d", sumU);
		}
		else{
			printf("%d", sumD);
		}
		
	}
}