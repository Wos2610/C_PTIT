#include<iostream>
#include<vector>
using namespace std;

#define M 100000
vector<int> mark(M + 1, 1);
void sieve(int n) {
	mark[0] = mark[1] = 0;
	int i;
	for (i = 2; i * i <= M; i++) {
		if (mark[i] == 1) {
			for (int j = i * i; j <= M; j += i) {
				mark[j] = 0;
			}
		}
	}
	for (i = 1; i <= M; i++) {
		if (mark[i] == 1 && n == i ) {
			printf("YES\n");
			return;
		}
	}
	printf("No\n");
}

int main() {
	int T;
	scanf("%d", &T);

	while (T--) {
		int n;
		scanf("%d", &n);
		sieve(n);
	}
	return 0;
}