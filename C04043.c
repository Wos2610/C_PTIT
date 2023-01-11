#include<stdio.h>
#include<math.h>

long long f[5006];

int isPerfectSquare(long long n){
	long long can = sqrt(n);
	if(can * can == n){
		return 1;
	}
	return 0;
}

void quickSort(long long f[], int l, int r){
	long long pivot = f[(l + r)/2];
	int i = l;
	int j = r;
	while(i <= j){
		while(f[i] < pivot){
			i++;
		}
		while(f[j] > pivot){
			j--;
		}
		if(i <= j){
			long long temp = f[j];
			f[j] = f[i];
			f[i] = temp;
			i++;
			j--;
		}
	}
	if(i < r){
		quickSort(f, i, r);
	}
	if(j > l){
		quickSort(f, l, j);
	}
}

int binarySearch(int l, int r, long long x){
	while(l <= r){
		int mid = (l + r)/2;
		if(f[mid] > x){
			r = mid - 1;
		}
		else if(f[mid] < x){
			l = mid + 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}

void process(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%lld", &f[i]);
	}
	quickSort(f, 1, n);
//	for(int i = 1; i <= n; i++){
//		printf("%lld ", f[i]);
//	}
	long long temp = 0;
	for(int i = 1; i < n; i++){
		for(int j = i + 1; j <= n; j++){
			temp = f[i]*f[i] + f[j]*f[j];
//			printf("%lld ", temp);
			if(isPerfectSquare(temp)){
				temp = sqrt(temp);
//				printf("%lld ", temp);
				if(binarySearch(1, n, temp) != -1){
					printf("YES");
					return;
				};
			}
		}
	}
	printf("NO");
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		process();
		printf("\n");
	}
}