#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int a[10000000];
int count[10000000];
int main(){
	int T;
	scanf("%d", &T);
	while(T > 0){
		int i;
		for(i = 0; i < 10000000; i++){
			count[i] = 0;
		}
		int n;
		scanf("%d", &n);
		int max = 0;
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
			count[a[i]]++;
			if(max < a[i]){
				max = a[i];
			}
		}
		
		unsigned long long soCap = 0;
		for(i = 1; i <= max; i++){
			if(count[i] > 1){
				soCap += (unsigned long long) count[i] * (count[i] - 1) / 2 ;
			}
		}
		printf("%llu", soCap);
		printf("\n");
		T--;
	}
	return 0;
}
