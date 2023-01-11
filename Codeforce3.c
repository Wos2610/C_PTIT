#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void nhapMang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}

int a[10000000];
int mark[1000000] = {0};
int main(){
	int n;
	scanf("%d", &n);
	nhapMang(a, n);
	
	int i;
	int temp = n;
	while(temp > 0){
		for(i = 0; i < n; i++){
			if(a[i] == temp){
				mark[temp] = 1;
				break;
			}
		}
		if(mark[temp] == 0){
			printf("NO");
			return 0;
		}
		temp--;
	}
	
	long long sum = n*(n + 1)/2;
	printf("YES %lld", sum);
	
	return 0;
}
