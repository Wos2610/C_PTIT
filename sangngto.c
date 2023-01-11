#include<stdio.h>

int mark[100001] = {0};
void sieve() {
	mark[0] = mark[1] = -1;
	int i,j;
	for (i = 2; i * i <= 100000; i++) {
		if (mark[i] == 0) {
			for (int j = i * i; j <= 100000; j += i) {
				mark[j] = -1;
			}
		}
	}
}

int main() {
	int T;
	scanf("%d", &T);
	sieve();
	while (T--) {
		int n;
		scanf("%d", &n);
		if(mark[n] == 0){
			printf("YES\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}