#include<stdio.h>
#include<string.h>

char a[1006];
char b[1006];

void add(char a[], char b[]){
	int n = strlen(a);
	int m = strlen(b);
	while(n < m){
		char temp[1006] = "";
		strcpy(temp, a);
		strcpy(a, "0");
		strcat(a, temp);
		n++;
	}
	while(m < n){
		char temp[1006] = "";
		strcpy(temp, b);
		strcpy(b, "0");
		strcat(b, temp);
		m++;
	}
	
	int sum = 0, rem = 0;
	char s[1006] = "";
	char ss[1006] = "";
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
		if(s[i] == '0'){
			k--;
		}
		else{
			break;
		}
	}
	
	for(int i = k - 1; i >= 0; i--){
		ss[k - i - 1] = s[i];
	}
	
	printf("%s\n", ss);
}

int compare(char a[], char b[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] < b[i]){
			return 0;
		}
		else if(a[i] > b[i]){
			return 1;
		}
	}
	return 1;
}

void sub(char a[], char b[]){
	int n = strlen(a);
	int m = strlen(b);
	while(n < m){
		char temp[1006] = "";
		strcpy(temp, a);
		strcpy(a, "0");
		strcat(a, temp);
		n++;
	}
	while(m < n){
		char temp[1006] = "";
		strcpy(temp, b);
		strcpy(b, "0");
		strcat(b, temp);
		m++;
	}
	
//	printf("%s\n%s\n", a, b);
	if(compare(a, b, n) == 0){
		char temp[1006] = "";
		strcpy(temp, b);
		strcpy(b, a);
		strcpy(a, temp);
	}
	
	int sum = 0, rem = 0;
	char s[1006] = "";
	char ss[1006] = "";
	
	for(int i = n - 1; i >= 0; i--){
		sum = a[i] - '0' - b[i] + '0' - rem;
		if(sum >= 0){
			rem = 0;
		}
		else{
			rem = 1;
			sum += 10;
		}
		
		char x[10];
		x[0] = (char)sum%10 + '0';
		strncat(s, x, 1);
	}
	
//	printf("%s\n", s);
	int k = strlen(s);
	for(int i = k - 1; i >= 0; i--){
		if(s[i] == '0'){
			k--;
		}
		else{
			break;
		}
	}
	
	for(int i = k - 1; i >= 0; i--){
		ss[k - i - 1] = s[i];
	}
	printf("%s\n", ss);
}

int main(){
	scanf("%s", &a);
	scanf("%s", &b);
	add(a, b);
	sub(a, b);
}