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

int isEven(char str[]){
	int i;
	int n = strlen(str);
	for(i = 0; i < n; i++){
		if(str[i] % 2 != 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		char str[506] = "";
		scanf("%s", &str);
		if(thuanNghich(str) && isEven(str)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}