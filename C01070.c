#include<stdio.h>
#include<math.h>

int a1, a2, b1, b2, c1, c2;

void swap(int *a1, int *a2){
	int temp = *a2;
	*a2 = *a1;
	*a1 = temp;
}

int isSquareNum(int n){
	int can = sqrt(n);
	if(can*can == n){
		return 1;
	}
	return 0;
}

int ktra(int a1, int a2, int b1, int b2, int c1, int c2, int n){
	int count = 0;
	if(a1 == n){
		int temp = n - a2;
		if(b1 == temp || b2 == temp){
			count++;
		}
		if(c1 == temp || c2 == temp){
			count++;
		}
		if(count == 2){
			return 1;
		}
	}
	return 0;
}

int check(){
	if(a1 < a2){
		swap(&a1, &a2);
	}
	if(b1 < b2){
		swap(&b1, &b2);
	}
	if(c1 < c2){
		swap(&c1, &c2);
	}
//	printf("%d %d", a1, a2);
	int sum = a1*a2 + b1*b2 + c1*c2;
	if(isSquareNum(sum)){
		int n = sqrt(sum);
		if(ktra(a1, a2, b1, b2, c1, c2, n) || ktra(b1, b2, c1, c2, a1, a2, n) || ktra(c1, c2, a1, a2, b1, b2, n)){
			return 1;
		}
	}
	return 0;
}

int main(){
	scanf("%d%d%d%d%d%d", &a1, &a2, &b1, &b2, &c1, &c2);
	if(check()){
		printf("YES");
	}
	else{
		printf("NO");
	}
	
}