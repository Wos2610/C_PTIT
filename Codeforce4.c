#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(){
	int T;
	scanf("%d", &T);
	while(T > 0){
		int n;
		scanf("%d", &n);
		int count = 0;
		while(n > 0){
			if(n % 2 == 1){
				n--;
				count++;
			}
			else{
				n = n/2;
			}
		}
		
		printf("%d", count);
		printf("\n");
		T--;
	}
	return 0;
}


