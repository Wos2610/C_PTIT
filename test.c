#include<stdio.h>
#include<string.h>

int main(){
	char s[1000];
	scanf("%s", &s);
	int index = 2;
	int i;
	int n = strlen(s);
	for(i = 0; i < n; i++){
		if(i == index && i != n - 1){
			printf("%c,", s[i]);
			index += 3;
		}
		else{
			printf("%c", s[i]);
		}
	}
}