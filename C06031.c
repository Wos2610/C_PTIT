#include<stdio.h>
#include<string.h>

char s[56];
char s1[56];
int a[56];
int v[56];

void sort(char s[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = n - 1; j > i; j--){
			if(s[j] < s[j - 1]){
				char temp = s[j];
				s[j] = s[j - 1];
				s[j - 1] = temp;
			}
		}
	}
}
int main(){
	scanf("%s", s);
	int n = strlen(s);
	for(int i = 0; i < n; i++){
		v[s[i] - 'a'] = i;
	}
	strcpy(s1, s);
	sort(s1, n);
	int count = 0;
	for(int i = 0; i < n - 1; i++){
		if(v[s1[i] - 'a'] < v[s1[i + 1] - 'a']){
			count++;
		}
	}
	printf("%d", 26 - count);
	
}