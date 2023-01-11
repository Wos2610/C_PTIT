#include<stdio.h>
#include<string.h>

char str[1000006];
char substr[100000];
int a[8]={'P', 'R', 'O', 'P', 'T', 'I','T'};

void kTra(char str[]) {
	size_t n = strlen(str);
	int count = 0;
	int begin = 0;
	int i;
	int j = 0;
	for (i = begin; i < n; i++) {
		if (str[i] - a[j] == 0) {
			substr[count] = str[i];
			count++;
			j++;
			begin = i + 1;
		}
	}
	if (count == 7) {
		printf("YES");
	}
	else {
		printf("NO");
	}
}

int main(){
	scanf("%s", str);
	int n = strlen(str);
	kTra(str);
	return 0;
}