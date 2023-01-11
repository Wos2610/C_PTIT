#include<stdio.h>
#include<math.h>

int a[1000];
int count[1000] = {0};

void check(int a[], int n){
	int i,j;
	for(int i = 1; i <= n; i++){
		if(a[i - 1] < a[i]){
			count[i] = count[i - 1] + 1;
		}
		else{
			count[i] = 1;
		}
	}
	
	int countmax = -99999;
	for(i = 1; i <= n; i++){
		if(countmax < count[i]){
			countmax = count[i];
		}
	}
	printf("%d\n", countmax);
	
	for(i = 1; i <= n; i++){
		if(count[i] == countmax){
			for(j = i - countmax + 1; j <= i; j++){
				printf("%d ", a[j]);
			}
		}
		printf("\n");
	}
}

int main(){
	int T;
	scanf("%d", &T);
	int T1 = T;
	while(T--){
		int n;
		scanf("%d", &n);
		int i;
		for(i = 1; i <= n; i++){
			scanf("%d", &a[i]);
		}
		printf("Test %d:\n", T1 - T);
		check(a, n);
	}
	return 0;
}
