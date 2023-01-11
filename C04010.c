#include<stdio.h>

void timMin1Min2(int a[], int n){
	int min1 = 1000000;
	int min2 = 1000000;
	int i;
	for(i = 0; i < n; i++){
		if(a[i] < min1){
			min2 = min1;
			min1 = a[i];
		}
		else if((a[i] < min2) && (a[i] != min1)){
			min2 = a[i];
		}
	}
	printf("%d %d", min1, min2);
}
int a[1000000] = {0};
int main(){
	int n;
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	timMin1Min2(a, n);
	
	return 0;
}