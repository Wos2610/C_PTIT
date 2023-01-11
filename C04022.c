#include<stdio.h>

void timMax1Max2(int a[], int n){
	int max1 = -999999;
	int max2 = -999999;
	int i;
	for(i = 0; i < n; i++){
		if(a[i] > max1){
			max2 = max1;
			max1 = a[i];
		}
		else if((a[i] > max2) && (a[i] != max1)){
			max2 = a[i];
		}
	}
	printf("%d %d", max1, max2);
}
int a[1000000] = {0};
int main(){
	int n;
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	timMax1Max2(a, n);
	
	return 0;
}