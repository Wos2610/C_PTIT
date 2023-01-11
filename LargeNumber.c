#include<stdio.h>
#include<string.h>

// ADD
void process(){
	char s1[1000] = "";
	char s2[1000] = "";
	char s[1000] = "";
	char ss[1000] = "";
	scanf("%s", &s1);
	scanf("%s", &s2);
	int n = strlen(s1);
	int m = strlen(s2);
	
	while(n > m){
		char temp[1000];
		strcpy(temp, s2);
		strcpy(s2, "0");
		strcat(s2,temp);
		m++;
	}
	while(n < m){
		char temp[1000];
		strcpy(temp, s1);
		strcpy(s1, "0");
		strcat(s1,temp);
		n++;
	}
	
	int sum = 0, rem = 0;
	for(int i = n - 1; i >= 0; i--){
		sum = s1[i] - '0' + s2[i] - '0' + rem;
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
		ss[k - i - 1] = s[i];
	}
	printf("%s ", ss);
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		process();
		printf("\n");
	}
}

// SUB 

int compare(char s1[], char s2[], int n){
	for(int i = 0; i < n; i++){
		if(s1[i] < s2[i]){
			return 0;
		}
		else if(s1[i] > s2[i]){
			return 1;
		}
	}
	return 1;
}

void process(){
	char s1[1000] = "";
	char s2[1000] = "";
	char s[1000] = "";
	char ss[1000] = "";
	scanf("%s", &s1);
	scanf("%s", &s2);
	int n = strlen(s1);
	int m = strlen(s2);
	
	while(n > m){
		char temp[1000];
		strcpy(temp, s2);
		strcpy(s2, "0");
		strcat(s2,temp);
		m++;
	}
	while(n < m){
		char temp[1000];
		strcpy(temp, s1);
		strcpy(s1, "0");
		strcat(s1,temp);
		n++;
	}
	
	if(compare(s1, s2, n) == 0){
		char temp[1000];
		strcpy(temp, s2);
		strcpy(s2, s1);
		strcpy(s1, temp);
	}
	
	int sum = 0, rem = 0;
	for(int i = n - 1; i >= 0; i--){
		sum = s1[i] - '0' - s2[i] + '0' - rem;
		if(sum >= 0){
			rem = 0;
		}
		else{
			rem = 1;
			sum += 10;
		}
		char x[1000];
		x[0] = (char)sum % 10 + '0';
		strncat(s, x, 1);
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
	printf("%s ", ss);
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		process();
		printf("\n");
	}
}