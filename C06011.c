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
	int i;
	int n = strlen(str);
	if(str[0] != '8' || str[n - 1] != '8'){
		return 0;
	}
	int sum = 0;
	for(i = 0; i < n; i++){
		sum += str[i] - '0';
	}
	if(sum % 10 != 0){
		return 0;
	}
	return 1;
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