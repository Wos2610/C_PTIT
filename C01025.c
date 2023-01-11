#include<stdio.h>
#include<math.h>

int main(){
	int a[4];
	int b[4];
	
	int i,j;
	for(i = 0; i < 4; i++){
		scanf("%d", &a[i]);
		scanf("%d", &b[i]);
	}
	
	for(i = 0; i < 4; i++){
		for(j = 3; j > i; j--){
			if(a[j] < a[j - 1]){
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	
	int x1 = abs(a[3] - a[0]);
	
	for(i = 0; i < 3; i++){
		for(j = 3; j > i; j--){
			if(b[j] < b[j - 1]){
				int temp = b[j];
				b[j] = b[j - 1];
				b[j - 1] = temp;
			}
		}
	}
	
	int x2 = abs(b[3] - b[0]);
	
	if(x1 > x2){
		printf("%d", x1 * x1);
	}
	else{
		printf("%d", x2 * x2);
	}
	
}
