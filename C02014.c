#include<stdio.h>
#include<math.h>

void square(int n){
	int i,j;
	for(i = - n + 1; i <= n - 1; i++){
		for(j = - n + 1; j <= n - 1; j++){
			if(abs(i) >= abs(j)){
				printf("%d", abs(i) + 1);
			}
			else{
				printf("%d", abs(j) + 1);
			}
		}
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d", &n);
	square(n);
	return 0;
}