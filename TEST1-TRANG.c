#include<stdio.h>

int save[1000000] = {0};
int main(){
	int n;
	scanf("%d", &n);
	if(n == 0){
		printf("0");
		return 0;
	}
	int index = -1;
	int i;
	while(n > 0){
		index++;
		save[index] = n % 2;
		n /= 2;
	}
	for(i = index; i >= 0; i--){
		printf("%d", save[i]);
	}
	return 0;
}