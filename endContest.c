#include<stdio.h>
#include<math.h>
#include<stdbool.h>
long long a[100000];

long long sumNum(long long x){
	long long sumCS = 0;
	while(x > 0){
		sumCS += (x % 10);
		x /= 10;
	}
	return sumCS;
}

long long sp(long long n){
    a[1] = 1;
    a[2] = 1;
    int i;
    for(i = 3; i <= n ;i++){
        a[i] = sumNum(a[i - 1]) + sumNum(a[i - 2]) ;
	}
    return a[n];
}

void inSort(int a[], int n){
	int i,j;
	for(i = 1; i <= n; i++){
		for(j = n ; j > i; j--){
			if(a[j] < a[j - 1]){
				int tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
			}
		}
	}
}

int main(){
	int T;
	scanf("%d", &T);
	while(T > 0){
		int n;
		scanf("%lld", &n);
		inSort(a, n);
		long long q;
		scanf("%d", &q);
		while(q > 0){
			long long l,r;
			scanf("%lld%lld", &l, &r);
			if(l > r){
				int tmp = r;
				r = l; 
				l = tmp;
			}
			long long i;
			long long count = 0;
			long long start = 0;
			long long end = 0;
			for(i = 1; i <= n; i++){
				if(sp(i) >= l){
					start = i;
					printf("s%lld ", start);
					break;
				}
			}
			for(i = n; i >= 1; i--){
				if(sp(i) <= r){
					end = i;
					printf("e%lld ", end);
					break;
				}
			}
			printf("%lld", count);
			printf("\n");
			q--;
		}
		printf("\n");
		T--;
	}
	return 0;
}
