// Bai 5
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(){
	int a[100000];
	int n,k;
	printf("Nhap n = ");
	scanf("%d", &n);
	printf("Nhap k = ");
	scanf("%d", &k);
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int count = 0;
	for(i = 0; i < n ; i++){
		if(a[i] == k){
			count++;
		}
	}
	
	printf("So lan xuat hien cua %d = %d", k, count);
	
	return 0;
}
