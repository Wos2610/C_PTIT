#include<stdio.h>
#include<math.h>

long long a[100006];
long long b[100006];

void quickSort(long long a[],int l, int r){
	long long pivot = a[(l + r)/2];
	int i = l;
	int j = r;
	while(i <= j){
		while(a[i] < pivot){
			i++;
		}
		while(a[j] > pivot){
			j--;
		}
		if(i <= j){
			long long temp = a[j];
			a[j] = a[i];
			a[i] = temp;
			i++;
			j--;
		}
	}
	if(i < r){
		quickSort(a, i, r);
	}
	if(j > l){
		quickSort(a, l, j);
	}
}
void process(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%lld", &a[i]);
	}
	
	quickSort(a, 1, n);
	
	long long min = 999999999;
	int count = 0;
	for(int i = 2; i <= n; i++){
		b[i] = abs(a[i] - a[i - 1]);
		if(b[i] < min){
			min = b[i];
		}
	}
	
	for(int i = 2; i <= n; i++){
		if(b[i] == min){
			count++;
		}
	}
	printf("%lld %d", min, count);
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		process();
		printf("\n");
	}
}