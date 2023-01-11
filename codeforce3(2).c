#include<stdio.h>
 
void nhapMang(int a[], int n){
	int i;
	for(i = 0; i < n ; i++){
		scanf("%d", &a[i]);
	}
}
 
 
int a[1000000];
int main(){
	int T;
	scanf("%d", &T);
	while(T > 0){
		int x;
		scanf("%d", &x);
		int k;
		scanf("%d", &k);
		int n;
		scanf("%d", &n);
		nhapMang(a, n);
		
		long long sum = x;
		int i;
		for(i = 0; i < n; i++){
			sum += a[i];
		}
		if(sum > k){
			printf("YES");
		}
		else{
			printf("NO");
		}
		printf("\n");
		T--;
	}
	return 0;
}
