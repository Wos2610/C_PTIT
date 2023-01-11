#include<stdio.h>
#include<math.h>

void triangle(int n){
	int i,j;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= 2*i - 1; j++){
			printf("%d",j);
		}
			printf("\n");
	}
}
int main(){
	int n;
	scanf("%d", &n);
	triangle(n);
	return 0;
}