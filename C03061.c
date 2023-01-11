#include<stdio.h>
#include<math.h>

void kTra(long long n) {
	int end = n % 10;
	n /= 10;
	int count = 0;
	long long m = n;
	long long dao = 0;
	while (n > 10) {
		dao = dao * 10 + n % 10;
		n /= 10;
		count++;
	}
	int begin = n % 10;
	m = m - begin * pow(10, count);
	if (((end == 2 * begin) || (begin == 2 * end)) && (dao == m)) {
		printf("YES\n");
		return;
	}
	printf("NO\n");
}
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		long long n;
		scanf("%lld", &n);
		kTra(n);
	}
	return 0;
}