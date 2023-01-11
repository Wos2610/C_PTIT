#include<stdio.h>
#include<string.h>
#include<ctype.h>

char str[1000006];

void password(int n, char str[]) {
	if (n < 8) {
		printf("NO\n");
		return;
	}
	int count = 0;
	int i;
	for (i = 0; i < n; i++) {
		if (isdigit(str[i])) {
			count++;
			break;
		}
	}
	for (i = 0; i < n; i++) {
		if (islower(str[i])) {
			count++;
			break;
		}
	}

	for (i = 0; i < n; i++) {
		if (isupper(str[i])) {
			count++;
			break;
		}
	}

	for (i = 0; i < n; i++) {
		if ((!isdigit(str[i])) && (!islower(str[i])) && (!isupper(str[i]))) {
			count++;
			break;
		}
	}

	if (count == 4) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	return;
}

int main() {
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d\n", &n);
		gets(str);
		password(n, str);
	}
	return 0;
}