#include<stdio.h>
#include<math.h>

int a[1000];
int b[1000];
int mix[10000];

void sortIn(int a[], int n){
	int i,j;
	for(i = 0; i < n; i++){
		for(j = n - 1; j > i; j--){
			if(a[j] < a[j - 1]){
				int tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1]= tmp;
			}
		}
	}
}
void sortDe(int a[], int n){
	int i,j;
	for(i = 0; i < n; i++){
		for(j = n - 1; j > i; j--){
			if(a[j] > a[j - 1]){
				int tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1]= tmp;
			}
		}
	}
}

void tron(int mix[],int a[], int b[], int n){
	sortIn(a, n);
	sortDe(b, n);
	int indexa = 0;
	int indexb = 0;
	int i;
	for(i = 0; i < 2*n; i++){
		if(i % 2 == 0){
			mix[i] = a[indexa];
			indexa++;	
		}
		else{
			mix[i] = b[indexb];
			indexb++;
		}
	}
	for(i = 0; i < 2 * n; i++){
		printf("%d ", mix[i]);
	}
	printf("\n");
}

int main(){
	int T;
	scanf("%d", &T);
	int T1 = T;
	while(T--){
		int n;
		scanf("%d", &n);
		int i;
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(i = 0; i < n; i++){
			scanf("%d", &b[i]);
		}
		printf("Test %d:\n", T1 - T);
		tron(mix, a, b, n);
	}
	return 0;
}
