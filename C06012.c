#include<stdio.h>
#include<string.h>

int thuanNghich(char str[]){
	int n = strlen(str);
	int i;
	for(i = 0; i < n/2; i++){
		if(str[i] != str[n - 1 - i]){
			return 0;
		}
	}
	return 1;
}

int check(char str[]){
	int i,j;
	int n = strlen(str);
	int count = 0;
	char s[] = {'2', '3', '5', '7'};
	for(i = 0; i < n; i++){
		for(j = 0; j < 4; j++){
			if( str[i] == s[j] ){
				count++;
			}
		}
	}
	if(count == n){
		return 1;
	}
	return 0;
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		char str[506] = "";
		scanf("%s", &str);
		if(thuanNghich(str) && check(str)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}