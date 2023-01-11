// Bai 4
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(){
	int a[100000];
	int n;
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int max1 = -1000000;
	int max2 = -1000000;
	for(i = 0; i < n; i++){
		if(max1 < a[i]){
			max2 = max1;
			max1 = a[i];
		}
		else if(max2 < a[i]){
			max2 = a[i];
		}
	}
	
	long long tich = max1 * max2;
	printf("%lld", tich);
	return 0;
}
