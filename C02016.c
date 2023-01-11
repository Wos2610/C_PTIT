#include<stdio.h>
#include<math.h>

void triangle(int n){
	int i,j;
	for(i = 1; i <= n; i++){
		int le = 1;
		int chan = 2;
		if(i % 2 != 0){
			for(j = 1; j <= i; j++){
				printf("%d", le);
				le += 2;
			}
		}
		else{
			for(j = 1; j <= i; j++){
				printf("%d", chan);
				chan += 2;
			}
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