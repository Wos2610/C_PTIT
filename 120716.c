#include<stdio.h>
#include<string.h>

char a[1206];
char b[1206];

void add(char a[], char b[]){
	int n = strlen(a);
	int m = strlen(b);
	while(n < m){
		char temp[1206] = "";
		strcpy(temp, a);
		strcpy(a, "0");
		strcat(a, temp);
		n++;
	}
	while(m < n){
		char temp[1206] = "";
		strcpy(temp, b);
		strcpy(b, "0");
		strcat(b, temp);
		m++;
	}
	
	char s[1206] = "";
	char ss[1206] = "";
	int sum = 0, rem = 0;
	for(int i = n - 1; i >= 0; i--){
		sum = a[i] - '0' + b[i] - '0' + rem;
		rem = sum/10;
		char x[10];
		x[0] = (char)sum%10 + '0';
		strncat(s, x, 1);
	}
	
	if(rem == 1){
		strcat(s, "1");
	}
	
	int k = strlen(s);
	for(int i = k - 1; i >= 0; i--){
		if(s[i] != '0'){
			strncpy(ss, s, i + 1);
			k = i + 1;
			break;
		}
	}
	
	char sss[1206] = "";
	for(int i = k - 1; i >= 0; i--){
		sss[k - i - 1] = ss[i];
	}
//	printf("%s ", a);
//	printf("%s ", b);
	printf("%s", sss);
	
}
int main(){
	scanf("%s", a);
	scanf("%s", b);
	add(a, b);
}