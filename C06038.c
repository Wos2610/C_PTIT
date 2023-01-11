#include<stdio.h>
#include<math.h>
#include<string.h>

int check(char a[], char b[]){
	int n = strlen(a);
	int begin = 0;
	for(int i = 0; i < n; i++){
		if(b[i] == a[0]){
			begin = i;
			break;
		}
	}
	
	int i;
	if(begin == n - 1){
		i = 0;
	}
	else{
		i = begin + 1;
	}
	int j = 1;
	while(j < n){
		if(b[i] != a[j]){
			return 0;
		}
		i++;
		j++;
		if(i == n){
			i = 0;
		}
	}
	return 1;
}

void add(char a[], char b[]){
	char s[1000] = "";
	char ss[1000] = "";
	int n = strlen(a);
	int m = strlen(b);
	while(n < m){
		char temp[1000] = "";
		strcpy(temp, a);
		strcpy(a, "0");
		strcat(a, temp);
		n++;
	}
	while(m < n){
		char temp[1000] = "";
		strcpy(temp, b);
		strcpy(b, "0");
		strcat(b, temp);
		m++;
	}
	int sum = 0, rem = 0;
	for(int i = n - 1; i >= 0; i--){
		sum = a[i] - '0' + b[i] - '0' + rem;
		rem = sum/10;
		char x[1000];
		x[0] = (char)sum % 10 + '0';
		strncat(s, x, 1);
	}
	
	if(rem == 1){
		strcat(s, "1");
	}
	
	int k = strlen(s);
	for(int i = k - 1; i >= 0; i--){
		b[k - i - 1] = s[i];
	}

}

void process(){
	char a[1000] = "";
	scanf("%s", &a);
	int n = strlen(a);
	char b[1000] = "";
	strcpy(b, a);
	for(int i = 2; i <= n; i++){
		add(a, b);
		if(!check(a, b)){
			printf("NO");
			return;
		}
	}
//	add(a, b);
//	add(a, b);
//	printf("%s ", b);
//	printf("%d ", check(a, b));
	printf("YES");
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		process();
		printf("\n");
	}
}