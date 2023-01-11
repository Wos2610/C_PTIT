#include<stdio.h>
 
void timMax1Max2(int a[], int n){
	int max1 = -1000000;
	int max2 = -1000000;
	int j;
	for(j = 0; j < n; j++){
		if(a[j] > max1){
			max2 = max1;
			max1 = a[j];
		}
		else if( (a[j] > max2) && (a[j] != max1)){
			max2 = a[j];
		}
	}
	if(max2 == -1000000){
		printf("0");
	}
	else{
		printf("%d %d\n", max2, max1);
	}
}
 
int main(){
	int T;
	scanf("%d", &T);
	int a[100000];
	int i,j;
	while(T > 0){
		int n;
		scanf("%d", &n);
		for(j = 0; j < n; j++){
			scanf("%d", &a[j]);
		}
		timMax1Max2(a, n);
		T--;
	}
	return 0;
}
