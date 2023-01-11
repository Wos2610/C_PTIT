#include<stdio.h>
#include<math.h>

int a[1000] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

void exchange(int n, int a[]){
	int count = 0;
	int i;
	while(n > 0){
		for(i = 9; i >= 0; i--){
			while(n >= a[i]){
				count++;
				n -= a[i];
			}
		}
	}
	
	printf("%d\n", count);
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		exchange(n, a);
	}
	return 0;
}
